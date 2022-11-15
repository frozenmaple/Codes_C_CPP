/*
** lab_ex_3_1.c for piecewise function in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午12:45:48 2019 frozenmaple
** Last update Sat Oct 11 下午12:46:31 2019 frozenmaple
*/

//用于实现一个分段函数
#include <stdio.h>
int main()
{
	float x;
	printf("please input the value of x: ");
	scanf("%f", &x);

	if (x < 1)
	{
		printf("y is %.2f\n", x); 			//when x<1, y=x  结果保留两位小数
	}
	else if (x >= 10)
	{
		printf("y is %.2f\n", 3 * x - 11); 	//when x>=10, y=3x-11
	}
	else
	{
		printf("y is %.2f\n", 2 * x - 1); 	//when x is [1,10), y=2x-1
	}

	return 0;
}
