#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int i;
    int prod = 9;
    int n = 99999999;
    for(i=0; i<n; i++){
        prod = prod * n;
    }
    printf(1,"5 - product is : %d\n", prod);
	exit();
}
