/*
** Array_Based_Stack.c for 顺序栈结构 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Wed Jul 9 上午8:38:28 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define n 5

//让新值入栈
int push(int *a, int top, int new_ele);

//让栈顶元素出栈
int pop(int *a, int top);

int main()
{
    int a[n];
    int top = -1;
    top = push(a, top, 10);
    top = push(a, top, 20);
    top = pop(a, top);
    top = pop(a, top);
    top = pop(a, top);
    return 0;
}

int push(int *a, int top, int new_ele)
{
    a[++top] = new_ele;
    return top;
}

int pop(int *a, int top)
{
    if (top==-1) 
    {
        printf("stack is already empty\n");
        return -1;
    }
    else
    {
        printf("top element %d is removed from stack\n", a[top]);
        top--;
        return top;
    }
}