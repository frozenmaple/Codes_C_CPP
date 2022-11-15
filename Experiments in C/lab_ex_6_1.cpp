/*
** lab_ex_6_1.c for middle value in 3 numbers in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午2:32:42 2019 frozenmaple
** Last update Sat Dec 6 下午2:26:16 2019 frozenmaple
*/


//写一个函数返回三个整数中的中间数。
#include <stdio.h>

int mid(int a, int b, int c);

int main(void)
{
    int n1, n2, n3;

    printf("please input 3 numbers:");
    scanf("%d%d%d", &n1, &n2, &n3);

    printf("The middle value of all is %d\n", mid(n1, n2, n3));
}


int mid(int a, int b, int c)
{
    if (a > b)
    {
        if (b > c)
        {
            return b;
        }
        else if (a > c)
        {
            return c;
        }
        else
        {
            return a;
        }
    }
    else if (a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return c;
    }
    else
    {
        return b;
    }
}

/*
int mid(int a, int b, int c)
{
    printf("%d %d %d\n", a, b, c);
    if(b<=a && a<=c)
    {
        return a;
    }
    if(a<=b && b<=c)
    {
        return b;
    }
    if(a<=c && c<=b)
    {
        return c;
    }
}
*/
