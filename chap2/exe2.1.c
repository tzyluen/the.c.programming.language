#include <stdio.h>

/**
 * determine the ranges of char, short, int, and long variables, both signed and
 * unsigned by printing appropriate values from standard headers and by direct
 * computation.
 */

int main(int argc, char *argv[])
{
    printf("char: %lu\n", sizeof(char));
    printf("short: %lu\n", sizeof(short));
    printf("int: %lu\n", sizeof(int));
    printf("long: %lu\n", sizeof(long));
    
    return 0;
}
