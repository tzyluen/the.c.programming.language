#include <stdio.h>

int main(int argc, char *argv[])
{
    int s_year = 1900;
    int e_year = 2020;
    for (; s_year < e_year; ++s_year) {
        if (((s_year % 4 == 0) && (s_year % 100 != 0)) || (s_year % 400 == 0))
            printf("%d - leap year\n", s_year);
        else
            printf("%d\n", s_year);
    }

    return 0;
}
