#include <stdio.h>
int htoi(char *s);

int main(int argc, char *argv[])
{
    printf("0x1 %d\n", htoi("0x1"));
    printf("0x8 %d\n", htoi("0x8"));
    printf("0xA %d\n", htoi("0xA"));
    printf("0xF %d\n", htoi("0xF"));
    printf("0x10 %d\n", htoi("0x10"));
    printf("0x1A %d\n", htoi("0x1A"));
    printf("0x1B %d\n", htoi("0x1B"));
    printf("0x1C %d\n", htoi("0x1C"));
    printf("0x1F %d\n", htoi("0x1F"));
    printf("0xFFF %d\n", htoi("0xFFF"));
    printf("0xFFFF %d\n", htoi("0xFFFF"));
    printf("0xFFFF %d\n", htoi("0xFFFFF"));

    return 0;
}


int htoi(char *s)
{
    int i, n;

    i = 0;
    /* handle the hex prefix */
    if (s[i] == '0') {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
            ++i;
    }

    n = 0;  /* the integer */
    for (; s[i] != '\0'; ++i) {
        if (s[i] >= '0' && s[i] <= '9')
            n = n * 16 + s[i] - '0';
        if (s[i] >= 'A' && s[i] <= 'Z')
            n = n * 16 + s[i] - 'A' + 10;
        if (s[i] >= 'a' && s[i] <= 'z')
            n = n * 16 + s[i] - 'a' + 10;
    }

    return n;
}
