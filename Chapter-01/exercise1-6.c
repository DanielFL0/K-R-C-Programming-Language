#include <stdio.h>

/*
 * Verify that the expression getchar() != EOF
 * is 0 or 1.
 */

int main()
{
    printf("%d", getchar() != EOF);
    return 0;
}