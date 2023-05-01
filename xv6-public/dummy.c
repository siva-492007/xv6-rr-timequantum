#include "types.h"
#include "stat.h"
#include "user.h"
#include "date.h"

int
main(int argc, char *argv[])
{
  int a1,a2; // initial and final time for each programs
  int i;
  int prod = 9999;
  int n = 9999;
  int pid = fork();
  
  if (pid < 0) {
    printf(2, "Error: Invalid PID!\n");
    exit();
  }


  if (pid > 0)
    wait();


  if (pid == 0) {
    // if (exec(argv[1], argv + 1) < 0) {
    //     printf(2, "Error: Exec fails!\n");
    //     exit();
    // }

    a1 = uptime();
    for(i=1; i<n; i++){
        prod = prod*n;
    }
    sleep(100)
    a2 = uptime();
    
    printf(1, "prod is: %d\n", prod);
    printf(1, "ticks is : %d\n", a2-a1);

  }
  


  exit();
}
