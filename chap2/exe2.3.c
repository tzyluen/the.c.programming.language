#include <stdio.h>

int main(int argc, char *argv[])
{
}


int htoi(char *s)
{
    int i = 0;
    if (s[i] == '0') {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
            ++i;
    }

    
}
