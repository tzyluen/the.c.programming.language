#include <stdio.h>
#include "../cprogramminglanguage.h"

#define MAXLINE 1000
#define IN 1
#define OUT 0

int main(int argc, char *argv[])
{
    char line[MAXLINE];
    int state = OUT;
    while (getline(line, MAXLINE) > 0) {
        int i;
        for (i = 0; line[i] != '\0'; ++i) {
            if (line[i] == '/' && line[i+1] == '*') {
                state = IN;
                ++i;
            }

            if (IN && line[i] == '*' && line[i+1] == '/') {
                state = OUT;
                ++i;
            }

            if (state == OUT) {
                printf("%c", line[i]);
            }
        }
    }

    return 0;
}
