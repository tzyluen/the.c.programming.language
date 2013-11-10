#include <stdio.h>

void squeeze(char s[], int c);
void squeeze2(char s1[], char s2[]);

int main(int argc, char *argv[])
{
    char s[] = "abcdcefg";
    printf("%s\n", s);
    squeeze(s, 'c');
    printf("%s", s);
    printf("    removing 'c'\n");
    squeeze2(s, "efg");
    printf("%s", s);
    printf("    removing \"efg\"\n");
    return 0;
}


/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;
    
    for (i = j = 0; s[i] != '\0'; ++i)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}


/* squeeze2: delete any s2 from s1 */
void squeeze2(char s1[], char s2[])
{
    int i, j, k, found;
    k = 0;
    for (i = 0; s1[i] != '\0'; ++i) {
        found = 0;
        for (j = 0; s1[j] != '\0'; ++j) {
            if (s1[i] == s2[j]) {
                found = 1;
                break;
            }
        }
        
        if (!found)
            s1[k++] = s1[i];
    }

    s1[k] = '\0';
}
