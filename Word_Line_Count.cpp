/*
** Word_Line_Count.cpp for Count the number of words & lines in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Wed May 12 10:30:12 AM 2021 frozenmaple
** Last update Wed May 12 10:30:12 AM 2021 frozenmaple
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main()
{
    char ch,ch_prev='\n';
    int word_count = 0; // number of words
    int line_count = 0; // number of lines
    bool inword = false; // true for ch in word; false for ch out of word

    while((ch = getchar())!=STOP)
    {
        if(ch == '\n')
            line_count++;
        if (!isspace(ch) && !inword)
        {
            word_count++;
            inword = true;
        }
        if (isspace(ch) && inword)
        {
            inword = false;
        }
        ch_prev = ch;
    }

    printf("there are %d words and %d lines\n", word_count, line_count);

    return 0;
}