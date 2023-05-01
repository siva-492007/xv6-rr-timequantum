#include "types.h"
#include "stat.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int i;
    int prod = 6;
    int n = 99999;
    for(i=0; i<n; i++){
        prod = prod * n;
    }
    printf(1,"2 - product is : %d\n", prod);
	exit();
}
