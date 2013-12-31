#include <stdio.h>

void lower2(char *s, char r[]);

int main(int argc, char *argv[])
{
    char r[250];
    lower2("tony STARK", r);
    printf("%s\n", r);

    return 0;
}


void lower2(char *s, char r[])
{
    int i;
    for (i = 0; s[i] != '\0'; ++i)
        r[i] = (s[i] >= 'A' && s[i] <= 'Z') ? (s[i] - 'A') + 'a' : s[i];
    r[i] = '\0';
}
