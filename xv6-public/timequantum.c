#include "types.h"
#include "stat.h"
#include "user.h"
#include "date.h"

void
execute(char function_name[]){

  int pid = fork();
  
  if (pid < 0) {
    printf(2, "Error: Invalid PID!\n");
    exit();
  }

  if (pid > 0)
    wait();


  if (pid == 0) {
    char *argv[] = { function_name, 0 };
    exec(function_name, argv);
  }
}


int
main(int argc, char *argv[])
{
    int initialTime[5] = {0,0,0,0,0};
    int finalTime[5] = {0,0,0,0,0};
    int totalTime[5] = {0,0,0,0,0};

    // execute and calculate total time taken for each process
    initialTime[0] = uptime();
    execute("process1");
    finalTime[0] = uptime();

    initialTime[1] = uptime();
    execute("process2");
    finalTime[1] = uptime();

    initialTime[2] = uptime();
    execute("process3");
    finalTime[2] = uptime();

    initialTime[3] = uptime();
    execute("process4");
    finalTime[3] = uptime();

    initialTime[4] = uptime();
    execute("process5");
    finalTime[4] = uptime();
    
    for(int i=0; i<5; i++){
        totalTime[i] = finalTime[i] - initialTime[i];
        printf(1, "process %d: total time: %d\n", i+1, totalTime[i]);
    }

    // sorting
    for (int i = 0; i < 5-1; i++) {
        for (int j = 0; j < 5-i-1; j++) {
           if (totalTime[j] > totalTime[j+1]) {
              int temp = totalTime[j];
              totalTime[j] = totalTime[j+1];
              totalTime[j+1] = temp;
           }
        }
    }

    // print sorted array
    printf(1, "Sorted total time: ");
    for(int i=0; i<5; i++){
      printf(1, "%d ",totalTime[i]);
    }
    printf(1, "\n");

    // find alternate difference
    int altDiff[4] = {0,0,0,0};
    printf(1, "Alternative Diff: ");
    for(int i=1; i<5; i++){
        altDiff[i-1] = totalTime[i] - totalTime[i-1];
        printf(1, "%d ",altDiff[i-1]);
    }
    printf(1, "\n");


    // find max value of alternative differences
    int max = altDiff[0];
    for(int i=1; i<4; i++){
        if(altDiff[i] > max){
            max = altDiff[i];
        }
    }

    printf(1, "Time quantum i.e max value: %d\n", max);
    exit();
}
