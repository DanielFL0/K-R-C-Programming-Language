#include <stdio.h>

/*
 * Exercise 1-9. Write a program to copy its input to its
 * output, replacing each string of one or more blanks by
 * a single blank.
 */

#define IN 1
#define OUT 0

int main()
{
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            while ((c = getchar()) == ' ');
        putchar(c);
    }
    return 0;
}