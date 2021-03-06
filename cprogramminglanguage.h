#ifndef CPROGRAMMINGLANGUAGE_H
#define CPROGRAMMINGLANGUAGE_H

#include <stdio.h>
#include <ctype.h>

//int getline(char s[], int lim)
//{
//    int c, i;
//
//    for (i = 0; i < lim-1 && (c=getchar())!= EOF && c!='\n'; ++i)
//        s[i] = c;
//    if (c == '\n') {
//        s[i] = c;
//        ++i;
//    }
//    s[i] = '\0';    /* does not count the terminate char */
//    return i;
//}


void reverse(char s[], int len)
{
    int i,j;
    char r[len+1];  /* len: count until '\n', +1 is for \0 */

    for (i=len-1,j=0; i>=0; --i,++j)    /* len-1, exclude \0  */
        r[j] = s[i];

    r[j] = '\0';

    for (i=0; i<len+1; ++i)
        s[i] = r[i];
}


/* atof: convert string s to double */
double atof(char *s)
{
    double val, power;
    int exp, i, sign;

    for (i = 0; isspace(s[i]); i++) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        ++i;
    for (val = 0.0; isdigit(s[i]); i++) {
        printf("10.0 * %f + (%d - %d)\n", val, s[i], '0');
        val = 10.0 * val + (s[i] - '0');
        printf("%f\n", val);
    }
    if (s[i] == '.')
        i++;
    for (power = 1.0; isdigit(s[i]); i++) {
        val = 10.0 * val + (s[i] - '0');
        power *= 10.0;
    }
    val = sign * val / power;

    /* Exercise 4.2 */
    if (s[i] == 'e' || s[i] == 'E') {
        sign = (s[++i] == '-') ? -1 : 1;
        if (s[i] == '+' || s[i] == '-')
            ++i;
        for (exp = 0; isdigit(s[i]); ++i)
            exp = 10 * exp + (s[i] - '0');
        if (sign == 1)
            while (exp-- > 0)   /* positive exponent */
                val *= 10;
        else
            while (exp-- > 0)   /* negative exponent */
                val /= 10;
    }

    return val;
}


/* atoi: convert string s to integer using atof */
int atoi(char *s)
{
    return (int) atof(s);
}


/* showbits: shows character in readable binary */
void showbits(unsigned char c, char b[])
{
    int i, j, _b;
    for (j = 0, i = 7; i >= 0; --i) {
        _b = (c & (1 << i)) ? '1' : '0';
        b[j++] = _b;
        printf("%c", _b);
    }
    
    printf("-> %u\n", c);
}


/* showbit: enhanced version of showbits(unsigned char c, char b[]) */
void showbit(int n, char *b)
{
    int i, j, _b;
    for (j = 0, i = 32; i >= 0; --i) {
        _b = (n & (1 << i)) ? '1' : '0';
        b[j++] = _b;
        printf("%c", _b);
    }

    printf("-> %u\n", n);
}


/* binsearch: find x in v[0] <=  v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else    /* found match */
            return mid;
    }

    return -1;
}


/* binsearch2: exe3.1.c */
int binsearch2(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    mid = (low + high) / 2;
    while (low <= high && x != v[mid]) {
        if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
        mid = (low + high) / 2;
    }

    return (x == v[mid]) ? mid : -1;
}

#endif
