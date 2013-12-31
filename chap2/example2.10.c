#include <stdio.h>
#include "../cprogramminglanguage.h"

int bitcount(unsigned x);

int main(int argc, char *argv[])
{
    char b[32];
    showbit(99, b);
    printf("%u\n", bitcount(99));
    printf("%u\n", bitcount2(99));

    return 0;
}


int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>= 1)
        if (x & 01)
            ++b;
    return b;
}


int bitcount2(unsigned x)
{
    int b;
    for (b = 0; x != 0; x &= (x-1))
        ++b;
    return b;
}
