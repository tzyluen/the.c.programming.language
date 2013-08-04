#include <stdio.h>

int main(int argc, char *argv[])
{
    //celsius to fahrenheit
    float celsius, fahr;
    int upper, step;

    printf("celsius fahrenheit\n");
    for (celsius = 0, upper = 100, step = 5; celsius < upper; celsius += step) {
        fahr = ((9.0 / 5.0) * celsius) + 32.0;
        printf("%7.0f %10.1f\n", celsius, fahr);
    }

    return 0;
}
