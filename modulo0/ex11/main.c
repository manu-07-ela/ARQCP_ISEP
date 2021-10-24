#include <stdio.h>
#include "average.h"

int main(){
    int v[] = {1,2};
    int r = 0;
    int s = 0;
    r = average(v[0], v[1]);
    printf("average = %d\n", r);
    s = average_array(v,2);
    printf("average = %d\n", s);
    int av = average_global_array();
    printf("average global = %d\n", av);
    return 0;
}
