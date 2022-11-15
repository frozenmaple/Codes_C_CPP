/*
** Link_String.c for 字符串块链存储 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Sun Jul 20 下午4:49:31 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3 //每个链表节点可容纳字符数

typedef struct Link_String
{
    char data[MAX];
    struct Link_String *next;
} ln_str;

//字符串链表初始化
ln_str *init_link_string(char *string);

//打印字符串链表内容
void disp_link_string(ln_str *head);

int main()
{
    char str[] = "www";
    ln_str *head = init_link_string(str);
    disp_link_string(head);
    return 0;
}

ln_str *init_link_string(char *str)
{
    int length = strlen(str) + 1;   //此处+1是想把原字符串中结尾的'\0'也一并复制存储
    int num;
    //根据字符串总长度和单个链表节点字符串宽度的整除关系得到需要申请的节点数目
    //若能整除，则数据正好填满；
    //若不能整除，则需要让取整除法的结果+1，不然丢失最后一部分信息
    if (length % MAX != 0)
    {
        num = length / MAX + 1;
    }
    else
    {
        num = length / MAX;
    }

    ln_str *head = (ln_str *)malloc(sizeof(ln_str));
    head->next = NULL;
    ln_str *temp = head;
    int i, j;
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            //若数据还没被全部存储完，则继续copy
            //若原字符串数据已完全copy，则继续在链表最后几个未复制位置里置'\0'
            if (i*MAX+j<length) 
            {
                temp->data[j] = str[i * MAX + j];
            }
            else
            {
                temp->data[j] = '\0';
            }
        }
        ln_str *new_node = (ln_str *)malloc(sizeof(ln_str));
        new_node->next = NULL;
        temp->next = new_node;
        temp = new_node;
    }
    return head;
}

void disp_link_string(ln_str *head) 
{
    ln_str *temp= head;
    int i;
    while (temp!= NULL) 
    {
        for (i = 0; i < MAX; i++) 
        {
            printf("%c", temp->data[i]);
        }
        temp= temp->next;
    }
    printf("\n");
}