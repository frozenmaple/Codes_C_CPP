/*
** lab_ex_4_2.c for two 1D array corresponding dot multiplication in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午2:01:10 2019 frozenmaple
** Last update Fri Oct 11 下午2:01:10 2019 frozenmaple
*/

//写一个程序输入两个一维数组，每个数组有5个整型元素，然后显示两个数组对应元素的乘积。

#include <stdio.h>

int main(void)
{
    int n1[5], n2[5], i;

    printf("请输入第一个数组：\n");
    for (i = 0; i < 5; i++)
    {
        printf("请输入第%d个数：", i + 1);
        scanf("%d", &n1[i]);
    }

    printf("请输入第二个数组：\n");
    for (i = 0; i < 5; i++)
    {
        printf("请输入第%d个数：", i + 1);
        scanf("%d", &n2[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("n1[%d] * n2[%d] ：%d * %d = %d\n", i, i, n1[i], n2[i], n1[i] * n2[i]);
    }

    return 0;
}
