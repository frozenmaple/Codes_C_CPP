/*
** initialized.c for 链表初始化，首部指针置NULL in /mnt/d/Codes/C_Lang/计算单词的出现频率/链表版
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Jan 25 2:27:49 PM 2021 frozenmaple
** Last update Mon Jan 25 2:27:49 PM 2021 frozenmaple
*/

#include "word_manage_p.h"

Word *word_header = NULL;

void word_initialize(void)
{
    word_header = NULL;
}