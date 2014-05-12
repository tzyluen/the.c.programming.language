#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_atoi(char *);
void shellsort(int *, int);
void reverse(char []);

int main(int argc, char **argv)
{
    //printf("%d\n", my_atoi(argv[1]));

    int num[10];
    int length = sizeof(num) / sizeof(int);

    int i;
    for (i = 0; i < length; ++i)
        num[i] = rand();

    for (i = 0; i < length; ++i)
        printf("%d\n", num[i]);
    
    shellsort(num, length);

    printf("%s\n", "-----SORTED-----");

    for (i = 0; i < length; ++i)
        printf("%d\n", num[i]);

    char str[] = "john doe";
    reverse(str);
    printf("%s\n", str);

    return 0;
}

/* atoi: convert s to integer; version 2 */
int my_atoi(char s[])
{
    int i, n, sign;
    for (i = 0; isspace(s[i]); ++i) /* skip white space */
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-') /* skip sign */
        ++i;
    for (n = 0; isdigit(s[i]); ++i)
        n = 10 * n + (s[i] - 0);
    return sign * n;
}


/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;
    for (gap = n/2; gap > 0; gap /= 2) {
        printf("-D- gap: %d\n", gap);
        for (i = gap; i < n; i++) {
            for (j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap) {
                temp = v[j];
                v[j] = v[j+gap];
                v[j+gap] = temp;
            }
        }
    }
}


void reverse(char s[])
{
    int c, i, j;
    for (i = 0, j = strlen(s)-1; i < j; ++i, --j) {
        c = s[j], s[j] = s[i], s[i] = c;
    }
}
