#include <stdio.h>

/*
 * Exercise 1-20. Write a program detab that replaces tabs in the
 * input with the proper number of blanks to space to the next tab
 * stop. Assume a fixed set of tab stops, say every n columns.
 * Should n be a variable or a single blank would suffice to
 * reach a tab stop, which should be given preference?
 */

#define TABWIDTH 8

/* "Hello my name is Daniel and I like programming in C" */
/*  ^       ^       ^       ^       ^       ^       ^    */
/* "Hello   my      name    is Daniel and I like programming in C" */
/*  ^       ^       ^       ^       ^       ^       ^    */

int main()
{
    int c, i, cc, blanks;

    cc = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            cc = 0;
        else if (c == '\t') {
            for (i = 0; i < TABWIDTH - (cc%TABWIDTH); ++i)
                putchar('#');
            cc = 0;
        }
        else {
            putchar(c);
            ++cc;
        }
    }
    return 0;
}