/*
** word_manage_p.h for 用于结构体的声明和链表的首部声明 in /mnt/d/Codes/C_Lang/计算单词的出现频率/链表版
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Jan 25 2:24:19 PM 2021 frozenmaple
** Last update Mon Jan 25 2:24:19 PM 2021 frozenmaple
*/

#ifndef WORD_MANAGE_P_H_INCLUDED
#define WORD_MANAGE_P_H_INCLUDED

#include "word_manage.h"

typedef struct Word_tag
{
    char *name;
    int count;
    struct Word_tag *next;
} Word;

extern Word *word_header;

#endif /* WORD_MANAGE_P_H_INCLUDED */