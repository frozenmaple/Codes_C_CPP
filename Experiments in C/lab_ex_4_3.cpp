/*
** lab_ex_4_3.c for set diagonal line to 1, others to 0 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午2:04:54 2019 frozenmaple
** Last update Tue Nov 25 上午8:57:18 2019 frozenmaple
*/


/*
使用双重for循环设置9乘9的二维整型数组的对角线元素为1，非对角线元素为全0。
*/

#include <stdio.h>

int main(void)
{
    int a[9][9];
    int i, j;

    printf("题目要求的对角线矩阵为：\n");
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            if ((i == j)||(i+j == 8))             //主和反对角线置1
            //if (i == j)             //主对角线置1
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = 0;
            }
            printf("%3d", a[i][j]);     //for display effect, use width specified
        }
        printf("\n");
    }

    return 0;
}