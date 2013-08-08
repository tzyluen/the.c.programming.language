#include <stdio.h>

/* write a program to copy its input to its output, replacing each string of one
 * or more blanks by a single blank. */

int main(int argc, char *argv[])
{
    int c, b;
    b = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ') {
            if (b > 0) {
                continue;
            } else {
                c = ' ';
                ++b;    /* count the first occurrence */
            }
        } else {
            b = 0;  /* reset the space count occurrence */
        }

        printf("%c", c);
    }

    return 0;
}
