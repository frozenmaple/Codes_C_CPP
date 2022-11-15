/*
** Circular_Dual_Link_List.c for 双向循环链表实现约瑟夫环 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Fri Jul 4 下午3:34:05 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define n 5
typedef struct Circular_Dual_Link_List
{
    int data;
    struct Circular_Dual_Link_List *prior;
    struct Circular_Dual_Link_List *next;
} c_d_list;

//初始化双向循环链表
c_d_list *init_c_d_list(int size);

//输出双向链表
void disp_c_d_list(c_d_list *head);

//寻找并删除节点，双向链表
void find_del_list(c_d_list *head, int k, int m);

int main()
{
    c_d_list *head = init_c_d_list(n);
    disp_c_d_list(head);
    find_del_list(head, 3, 2);
    return 0;
}

c_d_list *init_c_d_list(int size)
{
    c_d_list *head = (c_d_list *)malloc(sizeof(c_d_list));
    head->data = 1;
    head->next = NULL;
    head->prior = NULL;
    int i;
    c_d_list *temp = head;
    for (i = 1; i < size; i++)
    {
        c_d_list *tempBody = (c_d_list *)malloc(sizeof(c_d_list));
        tempBody->data = i + 1;
        temp->next = tempBody;
        tempBody->prior = temp;
        tempBody->next = NULL;
        temp = tempBody;
    }
    temp->next = head;
    head->prior = temp;
    return head;
}

void disp_c_d_list(c_d_list *head)
{
    c_d_list *temp = head;
    int i;
    while (temp->next != head)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("%d \n", temp->data);
}

void find_del_list(c_d_list *head, int k, int m)
{
    c_d_list *temp = head;
    c_d_list *ahead = head->prior;
    c_d_list *behind = head->next;
    int i, j;
    //先顺时针再逆时针
    //挪到一开始要求的k点temp和它的前一节点ahead和后一节点
    for (i = 1; i < k; i++)
    {
        ahead = temp;
        temp = temp->next;
        behind = temp->next;
    }
    i = 1;
    while (temp->next != temp)
    {
        if (i % 2 != 0) //为奇数时顺时针计数
        {
            for (j = 1; j < m; j++)
            {
                ahead = temp;
                temp = temp->next;
                behind = temp->next;
            }

            ahead->next = temp->next;
            behind->prior = temp->prior;
            printf("the node with value %d is out\n", temp->data);
            free(temp);
            temp = behind;
        }
        else
        {
            for (j = 1; j < m; j++)
            {
                behind = temp;
                ahead = ahead->prior;
                temp = temp->prior;
            }

            ahead->next = temp->next;
            behind->prior = temp->prior;
            printf("the node with value %d is out\n", temp->data);
            free(temp);
            temp = ahead;
        }
        //i+=1,更换计数的转向顺序，奇数顺时针，偶数逆时针
        i = i + 1;
    }
}