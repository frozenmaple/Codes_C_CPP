//C语言趣味实验，P61
//求a[3][3]对角线元素的和
#include <stdio.h>
#define ROW 3 //数组行数
#define COL 3 //数组列数
int main()
{
	int array[ROW][COL];
	int i, j, k, l, sum = 0;

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
		sum = sum + array[i][i];
	}

	//add the second diagonal
	for (i = 0, j = ROW - 1; i < ROW; i++, j--)
	{
		sum = sum + array[i][j];
	}

	printf("the total sum is %d\n", sum);

	return 0;
}
