#include <stdio.h>

/*
 * Exercise 1-15. Rewrite the temperature conversion program
 * of Section 1.2 to use a function conversion.
 */

#define LOWER 0
#define UPPER 300
#define STEP 20

float celsius(int fahr);

int main()
{
    int fahr;

    printf("fahr\tcelsius\n");
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d\t%6.1f\n", fahr, celsius(fahr));
    return 0;
}

float celsius(int fahr)
{
    float cel;

    cel = (5.0/9.0) * (fahr-32.0);
    return cel;
}