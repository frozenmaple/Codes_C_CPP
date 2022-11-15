/*
** add_word.c for 往空链表或已有链表中添加新元素或增大原有元素的统计值count in /mnt/d/Codes/C_Lang/计算单词的出现频率/链表版
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Jan 25 3:05:52 PM 2021 frozenmaple
** Last update Mon Jan 25 3:05:52 PM 2021 frozenmaple
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "word_manage_p.h"

static char *my_strdup(char *src)
{
    char *dest;
    dest = malloc(sizeof(char) * (strlen(src) + 1));
    strcpy(dest, src);
    return dest;
}

/* to generate a new WORD structure variable */
static Word *create_word(char *name)
{
    Word *new_word;

    new_word = malloc(sizeof(Word));
    new_word->name = my_strdup(name);
    new_word->count = 1;
    new_word->next = NULL;

    return new_word;
}

/* to add the new_word to the list */
void add_word(char *word)
{
    Word *pos;
    Word *prev;
    Word *new_word;
    int result;

    prev = NULL;
    for (pos = word_header; pos != NULL; pos = pos->next)
    {
        result = strcmp(pos->name, word);
        if (result >= 0)
        {
            break;
        }
        prev = pos;
    }

    /* strcmp(str1, str2); 返回值为0，说明str1=str2；返回值>0，说明str2 < str1，故而要往前插入 */
    if (word_header != NULL && result == 0)
    {
        pos->count++;
    }
    else
    {
        new_word = create_word(word);
        /* prev还是NULL的话，说明还未被赋予新值，即链表未前进，还是为空 */
        if (prev == NULL)
        {
            new_word->next = word_header;
            word_header = new_word;
        }
        else
        {
            /*在当前索引位置pos前插入一个结构体元素，调整prev-next指向域*/
            new_word->next = pos;
            prev->next = new_word;
        }
    }
}