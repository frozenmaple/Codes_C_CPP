/*
** book2.c for C Codes in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Feb 22 下午2:35:07 2019 frozenmaple
** Last update Sun Oct 10 2:03:18 PM 2020 frozenmaple
*/
//C语言趣味实验，P15
#include <stdio.h>
int main()
{
	int i, j, a, b;
	i = 3;
	j = 5;
	a = ++i;
	b = j++;
	printf("a=%d,b=%d\n", a, b);
	printf("i:%d,%d\n", ++i, i);
	printf("j:%d,%d\n", j++, j);
	return 0;
}
