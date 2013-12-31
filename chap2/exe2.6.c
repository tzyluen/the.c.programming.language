#include <stdio.h>
#include "../cprogramminglanguage.h"

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);

int main(int argc, char *argv[])
{
    unsigned x = 9999;
    unsigned y = 1001;
    printf("x -> %u \ny -> %u\n", x, y);
    //printf("%u\n", getbits(x, 4, 3));

    char b[32];
    showbit(x, b);
    showbit(y, b);
    //showbit(setbits(x, 4, 3, y), b);
    
    return 0;
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p+1-n)) & ~(~0 << n);
}

/* setbits: returns x with the n bits that begin at position p, set to the rightmost
 * n bits of y, leaving the other bits unchanged.
 */
unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return  x & ~(~(~0 << n) << (p+1-n)) | (y & ~(~0 << n)) << (p+1-n);
}
