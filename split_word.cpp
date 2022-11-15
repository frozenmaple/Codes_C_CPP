/*
** split_word.c for split word from a file in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Nov 14 2:37:04 PM 2020 frozenmaple
** Last update Sun Nov 14 3:59:12 PM 2020 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void split_word(char *buf, int buf_size, FILE *fp);

int main()
{
    char buf[1024];
    FILE *fp = fopen("text1.txt", "r");
    split_word(buf, 1024, fp);
    printf("%s\n", buf);

    return 0;
}

void split_word(char *buf, int buf_size, FILE *fp)
{
    char ch;
    int i = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == '\r' || ch == '\n')
        {
            ;
        }
        else if (!isalpha(ch))
        {
            buf[i++] = ' ';
        }
        else
        {
            buf[i++] = ch;
        }
    }
    buf[i] = '\0';
}