#include <stdio.h>

/*
 * Exercise 1-8. Write a program to count blanks,
 * tabs and newlines.
 */

int main()
{
    /*
     * Program that counts blanks, tabs and newlines.
     */
    double sc;
    int c;

    /*
     * A double is used since it haves a larger storage size.
     */
    sc = 0;
    while ((c = getchar()) != EOF)
        /*
         * A more elegant solution is using
         * the OR operator in a single if.
         * i.e. if (c == ' ' || c == '\t' || c == '\n')
         */
        if (c == ' ')
            ++sc;
        else if (c == '\t')
            ++sc;
        else if (c == '\n')
            ++sc;
    printf("%.0f\n", sc);
    return 0;
}