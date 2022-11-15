/*
** Up_Down_Matrix_Comp.c for 上、下三角压缩存储 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Fri Aug 1 上午9:03:38 2019 frozenmaple
*/

#include <stdio.h>
#define n 3
#define m (n * (n + 1)) / 2
//下三角矩阵压缩存储
void Down_matrix_comp(int *tar, int (*src)[n]);

//上三角矩阵压缩存储
void Up_matrix_comp(int *tar, int (*src)[n]);

int main()
{
    int src[n][n] = {1, 0, 0, 2, 4, 0, 3, 5, 6};
    int tar[m];
    int i;
    Down_matrix_comp(tar, src);
    //Up_matrix_comp(tar,src);

    for (i = 0; i < m; i++)
    {
        printf("%d ", tar[i]);
    }
    printf("\n");
    return 0;
}

void Down_matrix_comp(int *tar, int (*src)[n])
{
    int i;
    int j;
    int k;
    for (j = 0; j < 3; j++)
    {
        for (i = j; i < 3; i++)
        {
            k = (i * (i + 1)) / 2 + j; //该公式用于映射下三角元素坐标到一维数组
            tar[k] = src[i][j];
        }
    }
}

void Up_matrix_comp(int *tar, int (*src)[n])
{
    int i;
    int j;
    int k;
    for (i = 0; i < 3; i++)
    {
        for (j = i; j < 3; j++)
        {
            k = (j * (j + 1)) / 2 + i; //该公式用于映射上三角元素坐标到一维数组
            tar[k] = src[i][j];
        }
    }
} /*
