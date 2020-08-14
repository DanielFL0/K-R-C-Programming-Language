#include <stdio.h>

/*
 * Exercise 1-16. Revise the main routine of the longest-line
 * program so it will correctly print the length of arbitrarily
 * long input lines , and as much as possible of the text.
 */

#define MAXLINE 10

int getline(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0)
        printf("%s\t%d", longest, max);
    return 0;
}

int getline(char s[], int lim)
{
    int i, c, add;

    i = 0, add = 0;
    while (((c=getchar())!=EOF) && c!='\n') {
        if (i < lim-1) {
            s[i] = c;
            ++i;
        }
        else
            ++add;
    }   
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i = i + add;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while((to[i] = from[i]) != '\0')
        ++i;
}