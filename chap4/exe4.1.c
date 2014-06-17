#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strrindex(char *, char *);
void spitout_matched_string_with_number(char *, int);

int main(int argc, char **argv)
{
    char *str1 = "leaving on the jet plane; the missing plane";
    char *str2 = "plane";
    int match = strrindex(str1, str2);
    spitout_matched_string_with_number(str1, match);

    return EXIT_SUCCESS;
}

/**
 * returns the position of the rightmost occurance of `t' in `s',
 * or -1 if there is none.
 */
int strrindex(char *s, char *t)
{
    int i, j;
    int match, rindex;
    match = rindex = -1;
    for (i = j = 0; i < strlen(s); ++i) {
        //printf("s[i]->%c, t[j]->%c, rindex->%d\n", s[i], t[j], rindex);
        if (s[i] == t[j]) {     /* char equi-check */
            if (match == -1)   /* if this is first char index match */
                match = i;     /* store mathcing index to rindex */
            ++j;                /* increase t index */
            if (j >= (strlen(t) - 1))
                rindex = match; /* first complete `t' match found */
        } else {
            match = -1; /* reset rindex */
            j = 0;       /* reset `t' offset */
        }
    }

    return rindex;
}


void spitout_matched_string_with_number(char *s, int i)
{
    int j;
    printf("%s\n", s);
    for (j = 0; j < strlen(s); ++j) {
        printf("%c", (i == j) ? '^' : ' ');
    } printf("\n");
}
