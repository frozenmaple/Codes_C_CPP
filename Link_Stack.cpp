/*
** Link_Stack.c for 链栈结构 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Wed Jul 9 上午9:18:33 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define n 5

//define link stack's prototype
typedef struct Link_Stack
{
    int data;
    struct Link_Stack *next;
} ln_stack;

//push() declaration
ln_stack *push(ln_stack *head, int new_ele);

//pop() declaration
ln_stack *pop(ln_stack *head);

//link stack display func
void disp_ln_stack(ln_stack *head);

int main()
{
    ln_stack *head = NULL;
    head = push(head, 1);
    head = push(head, 2);
    head = push(head, 3);
    head = push(head, 4);
    disp_ln_stack(head);
    head = pop(head);
    head = pop(head);
    disp_ln_stack(head);
    head = pop(head);
    head = pop(head);
    disp_ln_stack(head);
    head = pop(head);
    return 0;
}

ln_stack *push(ln_stack *head, int new_ele)
{
    ln_stack *temp = (ln_stack *)malloc(sizeof(ln_stack));
    if (temp == NULL)
    {
        printf("not enough memory for new_ele");
        exit(1);
    }
    temp->data = new_ele;
    temp->next = head;
    head = temp;
    return head;
}

ln_stack *pop(ln_stack *head)
{
    if (head == NULL)
    {
        printf("the stack is already empty\n");
    }
    else
    {
        ln_stack *temp = head;
        printf("Element with value %d is removed from the stack\n", temp->data);
        head = temp->next;
        free(temp);
    }
    return head;
}

void disp_ln_stack(ln_stack *head)
{
    ln_stack *temp = head;
    printf("The link stack is now:\n");
    while (temp)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}