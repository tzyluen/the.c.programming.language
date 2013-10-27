#include <stdio.h>
#define LIMIT 100

int getline(char s[], int lim);
void reverse(char s[], int len);

int main(int argc, char *argv[])
{
    char line[LIMIT];
    int length;
    while ((length = getline(line, LIMIT)) > 0) {
        printf("%s", line);
        reverse(line, length);
        printf("%s", line);
    }
    return 0;
}


int getline(char s[], int lim)
{
    int c, i;

    for (i = 0; i < lim-1 && (c=getchar())!= EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';    /* does not count the terminate char */
    return i;
}


void reverse(char s[], int len)
{
    int i,j;
    char r[len+1];  /* len: count until '\n', +1 is for \0 */

    for (i=len-1,j=0; i>=0; --i,++j)    /* len-1, exclude \0  */
        r[j] = s[i];

    r[j] = '\0';

    for (i=0; i<len+1; ++i)
        s[i] = r[i];
}
