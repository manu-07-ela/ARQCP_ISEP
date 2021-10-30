#include <stdio.h>
#include <stddef.h>
#include "methods.h"

int main(){

    char word [] ="ele";

    char initial_addr [] ="ele ele";

    char* addrs[7];

    find_all_words(initial_addr, word, addrs);

    for(int i=0; i<2; i++) {
        printf("%s \n", *(addrs+i));
        printf("%p \n", (addrs+i));
    }

    return 0;
}
