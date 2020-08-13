#include <stdio.h>

/*
 * Exercise 1-13. Write a program to print a histogram of the lengths of words in
 * its input. It is easy to draw the histogram with the bars horizontal; a vertical
 * orientation is more challenging.
 */

#define MAXWORDS 1000

int main()
{   
    int c, i, w, cc, j, largest;
    int words[MAXWORDS];

    for (i = 0; i < MAXWORDS; ++i)
        words[i] = 0;

    w = 0, cc = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            words[w] = cc;
            ++w;
            cc = 0;
        }
        else
            ++cc;
    }

    i = 0, largest = 0;
    while (words[i] != 0) {
        if (words[i] > largest)
            largest = words[i];
        ++i;
    }

    /*
     * Horizontal histogram.
     */
    i = 0;
    while (words[i] != 0) {
        printf("\n%d\t", i);
        for (j = 0; j < words[i]; ++j)
            putchar('*');
        ++i;
    }
    putchar('\n');

    /*
     * Vertical histogram.
     */
    i = 0;
    while (words[i] != 0) {
        printf("%d ", i);
        ++i;
    }
    
    for (i = 0; i < largest; ++i) {
        j = 0;
        putchar('\n');
        while (words[j] != 0) {
            if (words[j] > i)
                printf("* ");
            else
                printf("  ");
            ++j;
        }
    }
    return 0;
}