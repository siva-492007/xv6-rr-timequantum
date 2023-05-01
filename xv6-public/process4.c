#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int i;
    int prod = 8;
    int n = 99999;
    for(i=0; i<n; i++){
        prod = n * n;
    }
    printf(1,"4 - product is : %d\n", prod);
	exit();
}
