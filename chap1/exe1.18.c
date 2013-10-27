#include <stdio.h>
#define LIMIT 100
#define IN 1
#define OUT 0

int getline(char s[], int lim);
void trim(char s[], int lim);


int main(int argc, char *argv[])
{
    char s[LIMIT];
    while (getline(s, LIMIT) > 0) {
        printf("%s", s);
        trim(s, LIMIT);
    }
    return 0;
}

/*
 * for each line:
 *     if current char is ' ' or '\t':
 *         store the current index (as starting index to chop off if its blank
 *         until the end) as prevBlankIndex
 *     else if current char is '\0':
 *         if current index-1 is bigger than prevBlankIndex:
 *             move the '\0' index to prevBlankIndex
 *     else if current char is non white-space:
 *         reset the index
 */
void trim(char s[], int lim)
{
    int i;
    int state = OUT;
    int prevBlankIndex;
    for (i=0; i<lim && s[i]!='\0'; ++i) {   /* for each line */
        if (s[i] == ' ' || s[i] == '\t') {  /* if current char is ' ' or \t */
            state = IN;
            if (prevBlankIndex == 0) {
                prevBlankIndex = i;
            }
        } else if (s[i] == '\0') {          /* else if current char is '\0' */
            if (i-1 > prevBlankIndex) {     /* if current index-1 > prevBlankIndex */
                s[prevBlankIndex] = '\0';
            }
        } else if {                         
            state = OUT;
            prevBlankIndex = -1;            /* reset the index */
        }
    }
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
