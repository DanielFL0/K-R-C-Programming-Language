#include <stdio.h>

/*
 * Exercise 1-12. Write a program that prints its
 * input one word per line.
 */

int main()
{
    int c;

    while ((c = getchar()) != EOF)
        if (c == '\n' || c == '\t' || c == ' ')
            putchar('\n');
        else
            putchar(c);
    return 0;
}