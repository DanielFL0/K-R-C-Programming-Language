#include <stdio.h>

/*
 * Exercise 1-18. Write a program to remove trailing blanks and tabs
 * from each line, and to delete entirely blank lines.
 */

#define MAXLINE 1000
#define IN 1
#define OUT 0

int getline(char line[], int max);
void remove_spaces(char to[], char from[]);

int main()
{
    int len;
    char line[MAXLINE];
    char correct_line[MAXLINE];
    
    while ((len = getline(line, MAXLINE)) > 0) {
        remove_spaces(correct_line, line);
        printf("%s", correct_line);
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

void remove_spaces(char to[], char from[])
{
    int i, j, state;

    i = 0, j = 0, state = OUT;
    while(from[i] != '\0') {
        if (from[i] != ' ' && from[i] != '\t') {
            to[j] = from[i];
            ++j;
            state = OUT;
        }
        else if (state == OUT) {
            to[j] = from[i];
            ++j;
            state = IN;
        }
        ++i;
    }
    to[j] = '\0';
}