/*
** Bracket_Pair_Check.c for 算式括号匹配检测 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Thu Jul 10 下午4:52:32 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 100

int top = -1;

void push(char *data, char new_char);

char pop(char *data);

int main()
{
    char data[n]="{}()()";
    char bracket[n];
    char temp;

    //printf("input the equation\n");
    //scanf("%s", data);

    int len = strlen(data);
    int i;
    int j=-1;
    for (i = 0; i < len; i++) 
    {
        if (data[i]=='('||data[i]=='{') 
        {
            push(bracket, data[i]);
        }
        else
        {
            if (data[i]==')') 
            {
                temp = pop(bracket);
                if (temp=='(') 
                {
                    printf(" ( ) pair successfully\n");
                }
                else
                {
                    printf("wrong pair\n");
                }
            }
            if (data[i] == '}')
            {
                temp = pop(bracket);
                if (temp == '{')
                {
                    printf(" { } pair successfully\n");
                }
                else
                {
                    printf("wrong pair\n");
                }
            }
        }
    }
    if (top != -1)
    {
        printf("wrong pair\n");
    }
    return 0;
}

void push(char *data, char new_char)
{
    data[++top] = new_char;
}

char pop(char *data)
{
    char temp=' ';
    if (top==-1) 
    {
        printf("the stack is already empty\n");
    }
    else
    {
        temp = data[top];
        top--;
    }
    return temp;
}

