#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void itoa(int, char[]);
void reverse(char[]);


int main(int argc, char **argv)
{
    char s[50];
    itoa(-19831210, s);
    printf("%s\n", s);
    return EXIT_SUCCESS;
}


void itoa(int n, char s[])
{
    int i, sign;

    if ((sign = n) < 0)     /* record sign */
        n = -n;             /* make n negative */
    i = 0;
    do {    /* generate digits in reverse order */
        s[i++] = n % 10 + '0';  /* get next digit */
        printf("=%c=, =%d=\n", s[i-1], n);
    } while ((n /= 10) > 0);    /* delete it */

    if (sign < 0)
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
}


void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; ++i, --j) {
        c = s[j], s[j] = s[i], s[i] = c;
    }
}
