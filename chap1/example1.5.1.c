#include <stdio.h>

/**
 * We used `int' for a subtle but important reason:
 * + declare c to be type big enough to hold any value that `getchar' returns.
 * + we can't use `char' since c must be big enough to hold EOF in addition to
 * + any possible char.
 */
int main(int argc, char *argv[])
{
    int c;
    while ((c = getchar()) != EOF)
        putchar(c);

    return 0;
}
