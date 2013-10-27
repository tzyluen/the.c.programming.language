#include <stdio.h>
#include <string.h>
#include "../cprogramminglanguage.h"

#define SPACE 4
#define MAXLINE 1000

char *detab(char s[]);

int main(int argc, char *argv[])
{

    char line[MAXLINE];     /* current input line */
    char *detabed_line;
    while (getline(line, MAXLINE) > 0) {
        printf("%lu: %s", strlen(line), line);
        detabed_line = detab(line);
        printf("%lu: %s", strlen(detabed_line), detabed_line);
    }

    return 0;
}



char *detab(char s[])
{
    int i,j,k;
    char detabed_line[MAXLINE]; /* detabed line */

    k = 0;
    for (i = 0; s[i] != '\0'; ++i) {
        if (s[i] == '\t') {
            for (j = 0; j < SPACE; ++j) {
                detabed_line[k++] = ' ';
            }
        } else
            detabed_line[k++] = s[i];
    }
    detabed_line[k] = '\0';
    
    return detabed_line;
}
