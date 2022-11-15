/*
** dual list.c for dual list example in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Fri Jul 4 上午10:22:23 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define n 3
typedef struct dual_list
{
    struct dual_list *prior;
    int data;
    struct dual_list *next;
} d_list;

//初始化双向链表
d_list *init_d_list(int init_num);

//打印双向链表内容
void disp_d_list(d_list *head);

//insert new value at wanted position
d_list *inse_d_list(d_list *head, int new_ele, int loc);

//delete wanted element from dual list
d_list *del_d_list(d_list *head, int del_ele);

//search for wanted element within dual list, return the exact position in the list
int sear_d_list(d_list *head, int sear_value);

//amend the dual list with new value
d_list *amen_d_list(d_list *head, int old_ele, int new_ele);

int main()
{
    d_list *head = init_d_list(n);
    disp_d_list(head);
    head = inse_d_list(head, 100, 4);
    disp_d_list(head);
    head = del_d_list(head, 100);
    disp_d_list(head);
    head = amen_d_list(head, 100, 200);
    disp_d_list(head);
    return 0;
}

d_list *init_d_list(int init_num)
{
    d_list *head = (d_list *)malloc(sizeof(d_list));
    head->prior = NULL;
    head->next = NULL;
    head->data = 1;
    d_list *temp = head;
    int i;
    for (i = 1; i < init_num; i++)
    {
        d_list *tempBody = (d_list *)malloc(sizeof(d_list));
        tempBody->prior = temp;
        tempBody->next = NULL;
        tempBody->data = i + 1;
        temp->next = tempBody;
        temp = tempBody;
    }
    return head;
}

void disp_d_list(d_list *head)
{
    d_list *temp = head;
    while (temp->next != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }
    printf("%d \n", temp->data);
}

d_list *inse_d_list(d_list *head, int new_ele, int loc)
{
    d_list *new_element = (d_list *)malloc(sizeof(d_list));
    new_element->data = new_ele;
    new_element->prior = NULL;
    new_element->next = NULL;
    d_list *temp = head;
    int i;
    if (loc == 1)
    {
        new_element->next = temp;
        temp->prior = new_element;
        head = new_element;
        return head;
    }
    else
    {
        for (i = 1; i < loc - 1; i++)
        {
            temp = temp->next;
        }
        if (temp->next != NULL)
        {
            new_element->next = temp;
            new_element->prior = temp->prior;
            temp->prior->next = new_element;
        }
        else
        {
            new_element->prior = temp;
            temp->next = new_element;
        }
        return head;
    }
}

d_list *del_d_list(d_list *head, int del_ele)
{
    d_list *temp = head;
    if (temp->data == del_ele)
    {
        temp->next->prior = NULL;
        head = temp->next;
        free(temp);
        return head;
    }
    else
    {
        while (temp->next != NULL) //若temp尚未指向最后一节点，即为真
        {
            if (temp->data != del_ele)
            {
                temp = temp->next;
            }
            else
            {
                temp->prior->next = temp->next;
                temp->next->prior = temp->prior;
                free(temp);
                return head;
            }
        }
        if (temp->data == del_ele)
        {
            temp->prior->next = NULL;
            free(temp);
            return head;
        }
        else
        {
            printf("del_ele is not within this dual list\n");
            return head;
        }
    }
}

int sear_d_list(d_list *head, int sear_value)
{
    d_list *temp = head;
    int i = 1;
    while (temp)
    {
        if (temp->data == sear_value)
        {
            return i;
        }
        i = i + 1;
        temp = temp->next;
    }
    printf("the value is not found in the dual ist\n");
    return -1;
}

d_list *amen_d_list(d_list *head, int old_ele, int new_ele)
{
    d_list *temp = head;
    int j = sear_d_list(head, old_ele);
    if (j == -1)
    {
        printf("the list is not changed\n");
        return head;
    }
    else
    {
        int i;
        for (i = 1; i < j; i++)
        {
            temp = temp->next;
        }
        temp->data = new_ele;
        return head;
    }
}