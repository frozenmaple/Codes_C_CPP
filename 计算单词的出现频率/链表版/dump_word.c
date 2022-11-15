/*
** dump_word.c for 将内存中的链表内容输出到文件中 in /mnt/d/Codes/C_Lang/计算单词的出现频率/链表版
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Jan 25 3:10:56 PM 2021 frozenmaple
** Last update Mon Jan 25 3:10:56 PM 2021 frozenmaple
*/

#include <stdio.h>
#include "word_manage_p.h"

void dump_word(FILE *fp)
{
    Word *pos;

    for (pos = word_header; pos != NULL; pos = pos->next)
    {
        fprintf(fp, "-20%s%5d\n", pos->name, pos->count);
    }
}