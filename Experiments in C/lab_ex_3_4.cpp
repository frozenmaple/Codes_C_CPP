/*
** lab_ex_3_4.c for obtain the minimum number in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午1:18:24 2019 frozenmaple
** Last update Fri Oct 11 下午1:18:24 2019 frozenmaple
*/


#include <stdio.h>
int main()
{
    int a, b, c, min;
    printf("please input the value of a: ");
    scanf("%d", &a);
    printf("please input the value of b: ");
    scanf("%d", &b);
    printf("please input the value of c: ");
    scanf("%d", &c);

    if (a<b) 
    {
        if (a<c) 
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    else
    {
        if(b>c)
        {
            min = c;
        }
        else
        {
            min = b;
        }
    }

    printf("The minimum number of all numbers is %d\n", min);
    return 0;
}