#include "types.h"
#include "stat.h"
#include "user.h"


void
forloop(int n){

    int i;
    int prod = 99999;

    for(i=1; i<n; i++){
        prod = prod * n * n;
    }
    printf(1, "prod is: %d\n", prod); 

}


int
main()
{
  int a1,a2,b1,b2;

  a1 = uptime();
  forloop(8889999);
  a2 = uptime();

  b1 = uptime();
  forloop(8989999);
  b2 = uptime();
 
  printf(2,"time for prg 1: %d\n", a2-a1);
  printf(2,"time for prg 2: %d\n", b2-b1);
  
  return 1000;
}
