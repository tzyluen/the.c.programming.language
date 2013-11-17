#include <stdio.h>

void showbits(char c, char b[]);

int main(int argc, char *argv[])
{
    int a;
    char b[7];
    for (a = '0'; a <= '~'; ++a) {
        showbits(a, b);
    }

    int i;
    for (i = 0; i < 100; ++i) {
        showbits(i, b);
    }
    
    return 0;
}


void showbits(char c, char b[])
{
    int i, j, _b;
    for (j = 0, i = 7; i >= 0; --i) {
        _b = (c & (1 << i)) ? '1' : '0';
        b[j++] = _b;
        printf("%c", _b);
    } printf(": %d\n", c);
}
