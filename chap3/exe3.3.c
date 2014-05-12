#include <stdio.h>
#include <stdlib.h> /* required by EXIT_SUCCESS */

void expand(char *, char *);

int main(int argc, char **argv)
{
    char s2[1024];
    expand("1-z", s2);
    printf("%s\n", s2);

    return EXIT_SUCCESS;
}


void expand(char s1[], char s2[])
{
    char c;
    int i, j;
    i = j = 0;
    while ((c = s1[i++]) != '\0') { /* fetch a char from s1[] */
        /* if current index char is '-' and next char is bigger or equal to c */
        if (s1[i] == '-' && s1[i+1] >= c) { 
            ++i;                    /* advance counter i to next char */
            while (c < s1[i])       /* expand shorthand: while current char is < s1[i] */
                s2[j++] = c++;      /* append c into s2; where c is int order of ascii */
        } else
            s2[j++] = c;            /* copy the character */
    }
    s2[j] = '\0';                   /* null terminator */
}
