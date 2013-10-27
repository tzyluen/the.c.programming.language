#include <ctype.h>
#include <stdio.h>
#include "cprogramminglanguage.h"
#define MAXLINE 100

/* rudimentary calculator */
int main(int argc, char *argv[])
{
    double sum;
    char line[MAXLINE];
    int getline(char line[], int max);

    sum = 0;
    while (getline(line, MAXLINE) > 0)
        printf("\t%g\n", sum += atof(line));
    return 0;
}
