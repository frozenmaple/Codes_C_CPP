/*
** lab_ex_3_3.c for palindromic number in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午12:48:14 2019 frozenmaple
** Last update Sat Oct 11 下午12:51:32 2019 frozenmaple
*/

//用于判断是否是一个回文数
#include <stdio.h>

int main()
{
	int i, j = 0, k, l;
	printf("please enter a positive number: ");
	scanf("%d", &i);
	k = i;
	while (i != 0)
	{
		l = i % 10;		//取得当前最低位数
		j = 10 * j + l; //组合新数，先扩充10倍，再将刚才的所得余数即末位数填补到最后
		i = i / 10;		//舍弃其原来的最后一位
	}

	if (k == j)
	{
		printf("this is a palindromic number\n");
	}
	else
	{
		printf("this is a common number\n");
	}

	return 0;
}
