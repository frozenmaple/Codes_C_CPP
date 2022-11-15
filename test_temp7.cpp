/*
** test_temp7.c for Christmas tree in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:38:28 2019 frozenmaple
** Last update Tue Nov 4 上午10:00:01 2019 frozenmaple
*/

#include <stdio.h>

int main(void)
{
	int level, i, j, k;

	printf("请输入树的层数：");
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
