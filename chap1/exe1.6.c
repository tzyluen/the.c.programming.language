#include <stdio.h>

int main(int argc, char *argv[])
{
    int rv = (getchar() != EOF);
    if (rv)
        printf("EOF is true\n");
    else
        printf("EOF is false");

    return 0;
}
