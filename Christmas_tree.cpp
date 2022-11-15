/*
** Christmas_tree.c for Christmas tree in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:38:28 2019 frozenmaple
** Last update Thu Dec 15 12:53:01 PM 2021 frozenmaple
*/

#include <stdio.h>

int main(void)
{
    int level, i, j, k;

    printf("input the layers of the tree：");
    scanf("%d", &level);

    for (i = 1; i <= level; i++)
    {
        //处理第i层
        for (j = 0; j < i + 1; j++)
        {
            for (k = 1; k <= level - j; k++)
            {
                printf(" ");
            }
            for (k = 1; k <= 2 * j + 1; k++)
            {
                printf("*");
            }
            printf("\n");
        }
    }

    for (i = 1; i <= level; i++)
    {
        printf(" ");
    }
    printf("|\n");

    for (i = 1; i <= level; i++)
    {
        printf("=");
    }
    printf("V");
    for (i = 1; i <= level; i++)
    {
        printf("=");
    }
    printf("\n");

    return 0;
}
