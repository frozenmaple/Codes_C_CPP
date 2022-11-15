/*
** Circular_Link_List.c for 循环链表实现约瑟夫环 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Thu Nov 27 上午10:33:06 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define n 5
typedef struct Circular_Link_List
{
    int data;
    struct Circular_Link_List *next;
} c_list;

//初始化循环链表
c_list *init_c_list(int size);

//输出链表
void disp_c_list(c_list *head);

//寻找并删除节点
void find_del_list(c_list *head, int k, int m);

int main()
{
    c_list *head = init_c_list(n);
    disp_c_list(head);
    find_del_list(head, 3, 2);
    return 0;
}

c_list *init_c_list(int size)
{
    c_list *head = (c_list *)malloc(sizeof(c_list));
    head->data = 1;
    head->next = NULL;
    c_list *temp = head;
    int i;
    for (i = 1; i < size; i++)
    {
        c_list *tempBody = (c_list *)malloc(sizeof(c_list));
        tempBody->data = i + 1;
        temp->next = tempBody;
        tempBody->next = NULL;
        temp = tempBody;
    }
    temp->next = head;
    return head;

}

void disp_c_list(c_list *head)
{
    c_list *temp = head;
    int i;
    while (temp->next != head)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("%d \n", temp->data);
}

void find_del_list(c_list *head, int k, int m)
{
    c_list *temp = head;
    c_list *tail = head;
    int i, j;
    //找到head节点的前一节点
    while (tail->next != head)
    {
        tail = tail->next;
    }

    //挪到一开始要求的k点temp和它的前一节点tail
    for (i = 1; i < k; i++)
    {
        tail = temp;
        temp = temp->next;
    }

    while (temp->next != temp)
    {
        //从当前点开始数1，直到数到m,m点temp和它的前一节点tail
        for (j = 1; j < m; j++)
        {
            tail = temp;
            temp = temp->next;
        }

        tail->next = temp->next;
        printf("the node with value %d is out\n", temp->data);
        free(temp);
        temp = tail->next;
    }
}