#include <stdio.h>
#define IN  1
#define OUT 0

/* a program that prints its input one word per line */
int main(int argc, char *argv[])
{
    int c, state;
    state = IN;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        if (state == IN)
            printf("%c", c);
        else {
            printf("%c\n", c);
            state = IN;
        }
    }
    return 0;
}
