#include <stdio.h>

void char2bin(char b[], char c);
void printbin(char b[]);

int main(int argc, char *argv[])
{
    char b[7];
    int a;
    for (a = 'a'; a <= 'z'; ++a) {
        printf("%c -> ", a);
        char2bin(b, a);
        printbin(b);
    }

    int n = 7;
    char2bin(b, n);
    printbin(b);

    n = n & 0177;
    char2bin(b, n);
    printbin(b);
    
    return 0;
}


void showbits(char b[])
{
    int i, j;
    for (j = 0, i = 7; i >= 0; --i) {
        b[j++] = (c & (1 << i)) ? '1' : '0';
    }

    for (i = 0; b[i] != '\0'; ++i) {
        printf("%c", b[i]);
    } printf("\n");
}
