#include <stdio.h>

/*
 * Exercise 1-17. Write a program to print all input lines
 * that are longer than 80 characters.
 */

#define MAXLINE 1000
#define CHARLIMIT 80

int getline(char line[], int max);
void copy(char to[], char from[]);

int main()
{
    int len;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > CHARLIMIT) {
            copy(longest, line);
            printf("%s", longest);
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

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}