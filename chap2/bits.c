#include <stdio.h>
#include <math.h>
#include "../cprogramminglanguage.h"

int is_in_use(int car_num);
int mult_by_pow_2(int, int);
char in_use = 0;

int main(int argc, char *argv[])
{
    char b[7];
    unsigned int x, y;
    x = 72;
    y = 184;

    showbits(x, b);
    showbits(y, b);
    showbits(x & y, b);     /* bitwise AND */
    showbits(x | y, b);     /* bitwise OR */
    showbits(x ^ y, b);     /* bitwise exclusive OR */
    showbits(x >> 2, b);    /* right shift */
    showbits(y << 2, b);    /* left shift */
    printf("bitwise NOT ");
    showbits(~y, b);        /* bitwise NOT, One's Complement(Unary) */
    showbits(14, b);
    showbits(14 >> 1, b);

    /* use cases */
    showbits(in_use, b);
    showbits(is_in_use(x), b);

    int j = 5225, m, n;
    printf("The decimal %d is equal to binary - ", j);
    /* assume we have a function that prints a binary string when given a
     * decimal integer */
    showbits(j, b);
    
    /* the loop for right shift operation */
    char *b1;
    for (m = 0; m <= 5; ++m) {
        n = j >> m;
        printf("%d right shift %d gives ", j, m);
        showbit(n, b1);
    }

    /* left shift */
    int i1 = 4; /* bit pattern equivalent is 100 */
    j = i1 << 2; /* makes it 10000 a multiple of 2 i.e, 16 */
    printf("%d << 2 -> %d ", i1, j);
    showbits(j, b1);

    return 0;
}


int is_in_use(int car_num)
{
    // pow returns an int, but in_use will also be promoted to an int
    // so it doesn't have any effect; we can think of this as an operation
    // between chars
    extern char in_use;
    int p = pow(2, car_num);

    return in_use & p;
}


int mult_by_pow_2(int number, int power)
{
    return number<<power;
}
