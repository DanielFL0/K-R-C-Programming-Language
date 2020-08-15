#include <stdio.h>

/*
 * Exercise 1-19. Write a function that reverse(s) that reverses
 * the character string s. Use it to write a program that reverses
 * its input one line at a time.
 */

#define MAXLINE 1000

int getline(char line[], int max);
void reverse(char s[]);

int main()
{
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s\n", line);
    }
    return 0;
}

int getline(char s[], int lim)
{
    int i, c;

    for (i = 0; i<lim-1 && ((c=getchar())!=EOF) && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void reverse(char s[])
{
    int i, j;
    char temp[MAXLINE];

    i = 0, j = 0;
    while ((temp[i] = s[i]) != '\0')
        ++i;
    --i; /*Removes '\0'*/
    while (i >= 0) {
        s[j] = temp[i];
        ++j;
        --i;
    }
    s[j] = '\0';
}