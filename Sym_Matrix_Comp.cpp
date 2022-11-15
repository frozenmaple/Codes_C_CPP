/*
** Sym_Matrix_Upper_Comp.c for 对称矩阵压缩存储 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Fri Aug 1 上午8:57:53 2019 frozenmaple
*/

#include <stdio.h>
#define n 3
#define m (n * (n + 1)) / 2
//对称矩阵上三角压缩存储
void sym_matrix_up_comp(int *tar, int (*src)[n]);

//对称矩阵下三角压缩存储
void sym_matrix_down_comp(int *tar, int (*src)[n]);

int main()
{
    int src[n][n] = {1, 2, 3, 2, 4, 5, 3, 5, 6};
    int tar[m];
    int i;
    
    sym_matrix_up_comp(tar, src);
    sym_matrix_down_comp(tar, src);

    for (i = 0; i < m; i++)
    {
        printf("%d ", tar[i]);
    }
    printf("\n");
    return 0;
}

void sym_matrix_up_comp(int *tar, int (*src)[n])
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
}

void sym_matrix_down_comp(int *tar, int (*src)[n])
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