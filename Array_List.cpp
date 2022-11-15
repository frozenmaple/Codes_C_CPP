/*
** Array_List.c for Simple Array Implementation of Linear Lists example 
** in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Fri Jun 20 下午2:17:15 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define Size 5
typedef struct Table
{
    int *head;
    int length;
    int size;
} table;

table initTable()
{
    table t;
    t.head = (int *)malloc(Size * sizeof(int));
    if (!t.head)
    {
        printf("memory not enough");
        exit(0);
    }
    t.length = 0;
    t.size = Size;
    return t;
}

void displayTable(table *p)
{
    int i;
    for (i = 0; i < p->length; i++)
    {
        printf("%d ", *(p->head + i));
    }
    printf("\n");
}

// add element to linear table
void add_ele_table(table *p, int element, int location);

// delete element to linear table
void del_ele_table(table *p, int location);

// locate the specified location in the linear table
int loc_ele_table(table *p, int number);

// change the specified element of linear table for a new value
void ame_ele_table(table *p, int old_element, int new_element);

int main()
{
    table t = initTable();
    int i;
    int j;

    for (i = 1; i <= Size; i++)
    {
        t.head[i - 1] = i;
        t.length++;
    }

    table *p = &t;
    displayTable(p);
    j = loc_ele_table(p, 9);
    printf("j is %d now\n", j);
    del_ele_table(p, 3);
    displayTable(p);
    printf("p->length is %d, and p->size is %d\n", p->length, p->size);
    add_ele_table(p, 9, 3);
    displayTable(p);
    j = loc_ele_table(p, 9);
    printf("j is %d now\n", j);
    ame_ele_table(p, 9, 3);
    displayTable(p);
    return 0;
}

// del element to linear table
void del_ele_table(table *p, int location)
{
    if (location > p->length || location < 1)
    {
        printf("wrong location\n");
        exit(0);
    }
    if (p->length==0) 
    {
        printf("the list is already empty\n");
        exit(1);
    }
    int i;
    for (i = location; i < p->length; i++)
    {
        *(p->head + (i - 1)) = *(p->head + i);
    }
    p->length--;
}

// add element to linear table
void add_ele_table(table *p, int element, int location)
{
    if (location < 1 || location > p->length+1)
    {
        printf("wrong location\n");
        exit(0);
    }
    if (p->length == p->size)
    {
        p->head = (int *)realloc(p->head, (p->size + 1) * sizeof(int));
        if (p->head == NULL)
        {
            printf("not enough memory\n");
            exit(0);
        }
        p->size+=1;
    }
    int i;
    for (i = p->length; i >= location; i--)
    {
        *(p->head + i) = *(p->head + i - 1);
    }
    *(p->head + location - 1) = element;
    p->length++;
}

int loc_ele_table(table *p, int number)
{
    int i;
    for (i = 0; i < p->length; i++)
    {
        if (*(p->head + i) == number)
        {
            printf("number \"%d\" found, in the %dth position\n", number, i + 1);
            return i + 1;
        }
    }
    if (i == p->length)
    {
        printf("number is not found\n");
        return -1;
    }
}

void ame_ele_table(table *p, int old_element, int new_element)
{
    int i = loc_ele_table(p, old_element);
    if (i==-1) 
    {
        exit(1);
    } 
    else 
    {
        *(p->head + i - 1) = new_element;
    }
}