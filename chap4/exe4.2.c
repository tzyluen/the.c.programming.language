#include <stdio.h>
#include <ctype.h>

long double myatof(char s[]);

int main(int argc, char *argv[])
{
    char input[255];

    while (scanf("%s", &input) == 1) {
        printf("%Lf\n", myatof(&input));
    }

    return 0;
}


long double myatof(char s[])
{
    double val, power;
    int i, sign;

    for (i = 0; isspace(s[i]); i++)  /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        ++i;
    for (val = 0.0; isdigit(s[i]); ++i)
        val = 10.0 * val + (s[i] - '0');
    if (s[i] == '.')
        ++i;
    for (power = 1.0; isdigit(s[i]); ++i) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }

    printf("(%d) sign->%d, power->%lf, val->%lf\n", __LINE__, sign, power, val);

    long double sum = sign * val / power;
    int expsign, exppower;

    if (tolower(s[i]) == 'e') {
        ++i;
        expsign = (s[i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-')
            ++i;
        for (exppower = 0; isdigit(s[i]); ++i)
            exppower = 10 * exppower + (s[i] - '0');
        for (; exppower > 0; --exppower)
            if (expsign == -1)
                sum /= 10;
            else
                sum *= 10;
    }
    
    printf("(%d) sum->%Le, expsign->%d, exppower->%d\n", __LINE__, sum, expsign, exppower);

    return sum;
}
