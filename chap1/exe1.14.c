#include <stdio.h>

/* a program to print a histogram of the length of words in its input. It is
 * easy to draw the histogram with the bars horizontal; a vertical orientation
 * is more challenging. */
int main(int argc, char *argv[])
{
    int c;
    int nelem = '~'-' ';
    int chars[nelem];

    while ((c = getchar()) != EOF) {
        if (c <= '~' || c >= ' ') {
            ++chars[c-' '];
        }
    }

    int i;
    for (i = 0; i < nelem; ++i) {
        if (chars[i] > 0)
            printf("%c:%d\n", i, chars[i]);
    }

    return 0;
}
