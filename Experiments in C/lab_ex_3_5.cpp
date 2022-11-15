/*
** lab_ex_3_5.c for Sum of Factorial(1...n) in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午1:02:59 2019 frozenmaple
** Last update Fri Oct 11 下午1:02:59 2019 frozenmaple
*/

//求1!+2!+...n!

#include <stdio.h>
int main()
{
	long sum = 0, i, temp;
	int n, k;
	printf("input the value of n:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		temp = 1;
		for (k = 1; k <= i; k++)
		{
			temp = temp * k; //i!
		}
		sum = sum + temp;
	}
	printf("The sum of all the Factorial from 1 to %d is: %ld\n", n, sum);
	return 0;
}
