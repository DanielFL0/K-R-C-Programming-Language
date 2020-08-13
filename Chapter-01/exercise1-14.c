#include <stdio.h>

/*
 * Exercise 1-14. Write a program to print a histogram of the frequencies
 * of different characters in its input.
 */

#define TOTALASCII 256

int main()
{
    int i, c, j;
    int ascii[TOTALASCII];

    for (i = 0; i < TOTALASCII; ++i)
        ascii[i] = 0;

    while ((c = getchar()) != EOF)
        ++ascii[c];
    
    for (i = 0; i < TOTALASCII; ++i) {
        printf("\n%d\t", i);
        putchar(i);
        putchar('\t');
        for (j = 0; j < ascii[i]; ++j)
            putchar('*');
    }
    return 0;
}