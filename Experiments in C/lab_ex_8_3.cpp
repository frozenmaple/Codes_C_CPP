/*
** lab_ex_8_1.c for C Codes in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午4:14:03 2019 frozenmaple
** Last update Sat Dec 13 下午2:27:34 2019 frozenmaple
*/

//using fread() and fwrite() to demo for array input and output
#include <stdio.h>
#include <stdlib.h>
#define N 2

int main()
{
	FILE *fp;
	struct str
	{
		char name[10];
		int age;
		float score;
	} boya[N], boyb[N], *pa, *pb;
	int i;
	int size = sizeof(struct str);
	pa = boya;
	pb = boyb;

	for (i = 0; i < N; i++, pa++)
	{
		printf("input the student's name: ");
		scanf("%s", pa->name);
		printf("input the student's age: ");
		scanf("%d", &pa->age);
		printf("input the student's score: ");
		scanf("%f", &pa->score);

		//清空缓冲区
		scanf("%*[^\n]");
		scanf("%*c");
	}

	/*
	//save data into D:\1.txt, Under Windows Enviroment
	if ((fp = fopen("D:\\1.txt", "wt+")) == NULL)
	{
		printf("cannot open file\n");
		return EXIT_FAILURE;
	}

	//save data into D:\physical_test.txt, Under WSL Enviroment
	if ((fp = fopen("/mnt/d/physical_test.txt", "wt+")) == NULL)
	{
		printf("cannot open file\n");
		return EXIT_FAILURE;
	}
	*/

	//save data into physical_test.txt
	if ((fp = fopen("physical_test.txt", "wt+")) == NULL)
	{
		printf("cannot open file\n");
		return EXIT_FAILURE;
	}

	printf("\n\n");
	pa = boya;
	for (i = 0; i < N; i++, pa++)
	{
		fprintf(fp, "%s %d %f\n", pa->name, pa->age, pa->score);
	}

	rewind(fp);

	for (i = 0; i < N; i++, pb++)
	{
		fscanf(fp, "%s %d %f", pb->name, &pb->age, &pb->score);
	}

	pb = boyb;
	//将boyb中的数据输出到显示器
	for (i = 0; i < N; i++, pb++)
	{
		printf("%s %d %f\n", pb->name, pb->age, pb->score);
	}

	fclose(fp);
	return 0;
}
