#include <stdio.h>

int any(char *s1, char *s2);

int main(int argc, char *argv[])
{
    char *s1 = "abcdefg";
    char *s2 = "cdefg";

    printf("%d\n", any(s1, s2));
    return 0;
}


/* any: returns the first location in a string s1 where any character from the
 * string s2 occurs, or -1 if s1 contains no characters from s2. */
int any(char *s1, char *s2)
{
    int i, j;
    for (i = 0; s1[i] != '\0'; ++i) {
        for (j = 0; s2[j] != '\0'; ++j) {
            if (s1[i] == s2[j])
                return i;
        }
    }

    return -1;
}
