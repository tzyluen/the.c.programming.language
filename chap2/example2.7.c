#include <stdio.h>
int myatoi(char s[]);
int mylower(int c);

int main(int argc, char *argv[])
{
    int n = myatoi("1300177");
    printf("%d\n", n);

    char *s = "TOnY StARk";
    int i;
    for (i = 0; s[i] != '\0'; ++i) {
        printf("%c", mylower(s[i]));
    }

    return 0;
}


/* atoi: convert s to integer */
int myatoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i) {
        printf("10 * %d + (%c - '0')\n", n, s[i]);
        n = 10 * n + (s[i] - '0');
    }
    return n;
}


int mylower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    return c;
}
