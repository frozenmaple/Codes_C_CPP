/*
** demo_relation_statement.c for relational statement in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Nov 25 上午9:50:02 2019 frozenmaple
** Last update Tue Nov 25 上午9:56:05 2019 frozenmaple
*/

#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if (1 <= x < 10)                //why this is not recommend, it equals to "(1<=x) < 10"
    {
        printf("1<=x<10\n");        
    }

    if ((x >= 1) && (x < 10))
    {
        printf("(x>=1)&&(x<10)\n");
    }

    return 0;
}