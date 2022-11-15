/*
** word_manage.h for 用于声明各子模块用途 in /mnt/d/Codes/C_Lang/计算单词的出现频率/链表版
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Jan 25 2:19:05 PM 2021 frozenmaple
** Last update Mon Jan 25 2:19:05 PM 2021 frozenmaple
*/

#ifndef WORD_MANAGE_H_INCLUDED
#define WORD_MANAGE_H_INCLUDED

#include <stdio.h>

void word_initialize(void);
void add_word(char *word);
void dump_word(FILE *fp);
void word_finalize(void);

#endif