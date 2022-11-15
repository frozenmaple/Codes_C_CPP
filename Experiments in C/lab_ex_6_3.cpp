/*
** lab_ex_6_3.c for C Codes in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午2:57:54 2019 frozenmaple
** Last update Fri Oct 11 下午2:57:54 2019 frozenmaple
*/


//(a) 写一个函数返回十个整型元素数组中的最小值。
//(b) 修改上述函数，将数组元素的个数作为函数的参数。

#include <stdio.h>

int mina(int a[]) //(a)的解答
{
    int i, m;
    
    m = a[0];
    for (i = 0; i < 10; i++)
    {
        if (a[i] < m)
        {
            m = a[i];
        }
    }
    return m;
}

int minb(int a[], int size) //(b)的解答
{
    int i, m;
    
    m = a[0];
    for (i = 0; i < size; i++)
    {
        if (a[i] < m)
        {
            m = a[i];
        }
    }
    return m;
}

int main(void)
{ 
    int n[10], i;

    printf("请输入十个整数：\n");
    for (i = 0; i < 10; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &n[i]);
    }

    printf("十个数中最小的一个数为%d\n", mina(n));     //(a)的调用
    printf("十个数中最小的一个数为%d\n", minb(n, 10)); //(b)的调用

}