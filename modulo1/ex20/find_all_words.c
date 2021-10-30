#include <stddef.h>
#include "methods.h"

void find_all_words(char* str, char* word, char** addrs) {
    char* p;
    while(p != NULL) {
        p = find_word(str,word);
        if (p != NULL) {
            *addrs = p;
            addrs++;
            str = p+1;
        }
    }
}
