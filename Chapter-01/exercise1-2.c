#include <stdio.h>

/*
 * Exercise 1-2. Experiment to find out what happens
 * when printf's argument string contains \c,
 * where c is some character not listed above.
 */

int main()
{
    /*
     * Since the escape sequence \c is not defined
     * in the C language, the following statement
     * will produce a compiler warning.
     */
    printf("hello world\c");
    return 0;
}