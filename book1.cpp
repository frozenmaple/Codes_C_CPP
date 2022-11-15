/*
** book1.c for book1_test in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Tue Feb 19 上午10:23:50 2019 frozenmaple
** Last update Sat Apr 9 3:47:01 PM 2021 frozenmaple
*/

#include <stdio.h>

int main()
{
	int i = 5, j = 6, k = 0;
	printf("%d,%d,%d\n", i, j, k);

	i++;
	++j;
	printf("%d,%d,%d\n", i, j, k);

	i--;
	--j;
	printf("%d,%d,%d\n", i, j, k);

	k = (i++) + (++j);
	printf("%d,%d,%d\n", i, j, k);

	k = (i--) + (--j);
	printf("%d,%d,%d\n", i, j, k);

	i = j = k = 7;
	printf("%d,%d,%d\n", i, j, k);

	k += i++;
	printf("%d,%d,%d\n", i, j, k);

	k %= ++i;
	printf("%d,%d,%d\n", i, j, k);

	k *= j--;
	printf("%d,%d,%d\n", i, j, k);

	getchar();

	return 0;
}
