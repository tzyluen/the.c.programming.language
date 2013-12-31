#include <stdio.h>
#include "../cprogramminglanguage.h"

int main(int argc, char **argv) {
    int v[] = {9, 99, 123, 456, 789, 888, 999, 1784};
    
    printf("%u\n", binsearch(456, v, sizeof(v)/4));

    return 0;
}

