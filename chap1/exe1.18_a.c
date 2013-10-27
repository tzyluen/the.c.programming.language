#include <stdio.h>
#define MAXLINE 1000    /* maximum input line size */

int getline(char s[], int maxline);
int trim(char s[]);

int main(int argc, char *argv[])
{
    char line[MAXLINE];     /* current input line */

    while (getline(line, MAXLINE) > 0)
        if (trim(line) > 0)
            printf("%s", line);
    return 0;
}


/* remove trailing blanks and tabs from character string s */
int trim(char s[])
{
    int i;
    i = 0;

    while (s[i] != '\n') /* find newline character */
        ++i;
    --i;                 /* back off from '\n' */
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    if (i >= 0) {        /* is it a nonblank line? */
        ++i;
        s[i] = '\n';     /* put newline character back */
        ++i;
        s[i] = '\0';     /* terminate the string */
    }

    return i;
}

int getline(char s[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline-1 && (c=getchar())!= EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';    /* does not count the terminate char */
    return i;
}
