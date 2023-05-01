#include "types.h"
#include "stat.h"
#include "user.h"

// void
// forloop(){
//     int i;
//     int prod = 5;
//     int n = 999;
//     for(i=0; i<n; i++){
//         prod = prod * n;
//     }
//     printf(1,"1 - product is : %d\n", prod);
// }

int
main(int argc, char *argv[])
{

    int i;
    int prod = 5;
    int n = 999;
    for(i=0; i<n; i++){
        prod = prod * n;
    }
    printf(1,"1 - product is : %d\n", prod);

    exit();
}

