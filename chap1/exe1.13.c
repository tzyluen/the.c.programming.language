#include <stdio.h>
#define IN  1
#define OUT 0

/* a program to print a histogram of the length of words in its input. It is
 * easy to draw the histogram with the bars horizontal; a vertical orientation
 * is more challenging. */
int main(int argc, char *argv[])
{
    int c, state, cc, cw;
    c = cc = cw;
    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
            cc = 0; /* reset char count */
        } else if (state == OUT) {
            ++cw;
            state = IN;
        }
        
        if (state == IN) {
            if (cc < 1) {
                printf("%d:", cw);
                ++cc;
                printf("#");
            }
        }
    }

    return 0;
}
