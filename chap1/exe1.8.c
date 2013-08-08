#include <stdio.h>

/* count blanks, tabs, newlines */
int main(int argc, char *argv[])
{
    int c, bl, tab, nl;
    bl = tab = nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++bl;
        if (c == '\t')
            ++tab;
        if (c == '\n')
            ++nl;
    }

    printf("blank:%d\ntab:%d\nnewline:%d\n", bl, tab, nl);

    return 0;
}
