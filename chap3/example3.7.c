#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int trim(char[]);

int main(int argc, char **argv)
{
    printf("%d:%s-\n", trim(argv[1]), argv[1]);

    return EXIT_SUCCESS;
}


/* trim: remove trailing blanks, tabs, newlines */
int trim(char s[])
{
    int n;
    for (n = strlen(s)-1; n >= 0; --n)
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    s[n + 1] = '\0';
    return n;
}
