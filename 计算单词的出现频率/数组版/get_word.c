/*
** get_word.c for get each word from a file in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Nov 14 2:37:04 PM 2020 frozenmaple
** Last update Thu Dec 30 2:09:32 PM 2020 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int get_word(char *buf, int buf_size, FILE *fp)
{
    int ch;
    int len ;
    while ((ch=getc(fp)) != EOF&&!isalnum(ch))
        ;
    if(ch==EOF)
        return EOF;

    len = 0;
    do
    {
        buf[len] = ch;
        len++;
        if(len >= buf_size)
        {
            fprintf(stderr,"word too long\n");
            exit(1);
        }
    } while ((ch = getc(fp)) != EOF && isalnum(ch));
    buf[len] = '\0';
    return len;
}

