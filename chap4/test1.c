#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    char *num = "102313E+23";

    int i;
    for (i = 0; isdigit(num[i]); ++i) {
        printf("%d\n", atoi(num));
    }

    return 0;
}
