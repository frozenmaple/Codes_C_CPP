#include <stdlib.h>
#include "word_manage_p.h"

void word_finalize(void)
{
    Word *temp;

    while (word_header != NULL)
    {
        /* 将链表头赋给临时指针，并将链表头指向下一个单元，同时将临时指针单元内部的字符指针free掉，并free自身*/
        temp = word_header;
        word_header = word_header->next;
        free(temp->name);
        free(temp);
    }
}