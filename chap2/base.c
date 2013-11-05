/**
 * To fully understand number systems - decimal, octal, hex
 */

#include <stdio.h>
#include <stdbool.h>
#define MAX 20

int strtodecimal(char *s);
char *itooctal(char *s);
char *itohex(char *s);

/* print 0..15 respectively in decimal, octal, hex */
int main(int argc, char *argv[])
{
    char s[3]; /* in mem: 99'\0' */
    int i;
    for (i = 0; i <= MAX; ++i) {
        sprintf(s, "%d", i);
        printf("%d\n", strtodecimal(s));
        printf("%s\n", itohex(s));
    }
    
    return 1;
}


/** base 10 to base 2 */
int itobinary(char *s)
{
    return 0;
}


/** string to base 10 int */
int strtodecimal(char *s)
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = n * 10 + s[i] - '0';

    return n;
}


char *itooctal(char *s)
{
    return s;
}


/** base 10 to base 16 */
char *itohex(char *s)
{
    return s;
}
