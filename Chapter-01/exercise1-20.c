#include <stdio.h>

/*
 * Exercise 1-20. Write a program detab that replaces tabs in the
 * input with the proper number of blanks to space to the next tab
 * stop. Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or a single blank would suffice to
 * reach a tab stop, which should be given preference?
 */

#define TABWIDTH 8

int main()
{
    int c, i;

    while ((c = getchar()) != EOF)
        if (c == '\t')
            for (i = 0; i < TABWIDTH; ++i)
                putchar(' ');
        else
            putchar(c);
         
    return 0;
}