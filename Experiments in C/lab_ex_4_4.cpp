/*
** lab_ex_4_4.c for two diagonal line's sum in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午1:32:09 2019 frozenmaple
** Last update Fri Oct 11 下午1:32:09 2019 frozenmaple
*/

//求a[3][3]对角线元素的和
#include <stdio.h>
#define ROW 3 //数组行数
#define COL 3 //数组列数
int main()
{
	int array[ROW][COL];
	int i, j, k, l;
	int sum_1 = 0; //diagonal with positive slope
	int sum_2 = 0; //diagonal with negative slope

	//initialize the array
	printf("Please enter %d numbers:\n", ROW * COL);
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	printf("\n\n"); //separate purpose

	//display whole array
	printf("The matrix is now:\n");
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf("%5d", array[i][j]);
		}
		printf("\n");
	}
	printf("\n\n"); //separate purpose

	//add the first diagonal
	for (i = 0; i < ROW; i++)
	{
		sum_1 = sum_1 + array[i][i];
	}

	printf("The sum of diagonal line with positive slope is %d\n", sum_1);

	//add the second diagonal
	for (i = 0, j = ROW - 1; i < ROW; i++, j--)
	{
		sum_2 = sum_2 + array[i][j];
	}

	printf("The sum of diagonal line with negative slope is %d\n", sum_2);

	return 0;
}
