#include <stdio.h>

/**
 *  original: for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
 */
int mygetline(char s[], int lim);

int main(int argc, char *argv[])
{
    char s[1000];
    mygetline(s, 1000);
    printf("%s\n", s);

    return 0;
}

int mygetline(char s[], int lim)
{
    int i, c;
    enum loop {NO, YES};
    enum loop okloop = YES;

    i = 0;
    while (okloop == YES) {
        if (i >= lim-1) {       /* outside of valid range ? */
            okloop = NO;
        } else if ((c = getchar()) == '\n') {
            okloop = NO;
        } else if (c == EOF) {  /* end of file ? */
            okloop = NO;
        } else {
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';

    return i;
}
