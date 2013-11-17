#include <stdio.h>
#include <math.h>
#include "../cprogramminglanguage.h"

int is_in_use(int car_num);
int mult_by_pow_2(int, int);
char in_use = 0;

int main(int argc, char *argv[])
{
    char b[7];
    showbits(72, b);
    showbits(184, b);
    showbits(72 & 184, b);
    showbits(72 | 184, b);

    /* use cases */
    showbits(in_use, b);
    showbits(is_in_use(75), b);
    
    showbits(2 << 2, b);

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
