/*
** book3.c for C Codes in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Feb 22 下午2:58:34 2019 frozenmaple
** Last update Tue Feb 25 下午2:33:20 2019 frozenmaple
*/
//C语言趣味实验，P42
//1!+2!+...+n!
#include <stdio.h>
int main()
{
	long sum = 0, i, temp;
	int n, k;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		temp = 1;
		for (k = 1; k <= i; k++)
		{
			temp = temp * k;
		}
		sum = sum + temp;
	}
	printf("%ld", sum);
	return 0;
}
