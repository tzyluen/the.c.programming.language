#include <stdio.h>

void escape(char s[], char *t);
void unescape(char s[], char *t);

int main (int argc, char **argv)
{
    char s[500];
    char *line = NULL;
    size_t len;
    ssize_t read;

    while ((read = getline(&line, &len, stdin)) != -1) {
        escape(s, line);
        printf("%s\n", s);
    } 
    
    return 0;
}


void escape(char s[], char *t)
{
    int i, j;
    for (i = j = 0; t[i] != '\0'; ++i) {
        switch (t[i]) {
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            default:
                s[j++] = t[i];
        }
    }
    s[j] = '\0';
}


void unescape(char s[], char *t)
{
    int i, j;
    for (i = j = 0,; t[i] != '\0'; ++i) {
        switch (t[i]) {
            case '\':
                t[];
                break;
            default:
                s[j];
        }
    }
}
