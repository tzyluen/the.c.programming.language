#include <stdio.h>

void mystrcat(char s[], char t[]);

int main(int argc, char *argv[])
{
    char s[] = "apong guan";
    char t[] = "selling apong and banana";
    mystrcat(s, t);
    printf("%s\n", s);

    printf("%lu\n", sizeof(s));

    return 0;
}


/* strcat: concatenate t to end of s; s must be big enough */
void mystrcat(char s[], char t[])
{
    int i, j;
    i = j = 0;
    while (s[i] != '\0')    /* find end of s */
        ++i;
    while ((s[i++] = t[j++]) != '\0')   /* copy t */
        ;
}
