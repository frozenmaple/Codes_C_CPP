/*
** test_temp4.c for test in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:37:01 2019 frozenmaple
** Last update Mon Oct 11 7:00:56 AM 2020 frozenmaple
*/




#include <stdio.h>
#include <stdlib.h>
#define N 101
int main()
{
	/*
	FILE *fp;
	char str[N + 1] = {0};

	if ((fp = fopen("D:\\1.txt", "at+")) == NULL)
	{
		printf("Cannot open file\n");
		return EXIT_FAILURE;
	}

	gets(str);
	fputs(str, fp);

	fclose(fp);
	*/

	struct school
	{
		char name[21];
		int student_nums;
	};

	struct school cslg1;

	struct school *ptr;
	ptr = &cslg1;

	scanf("%s", cslg1.name);
	scanf("%d", &(*ptr).student_nums);

	printf("%s\n", ptr->name);
	printf("%d\n", cslg1.student_nums);

	return 0;
}
