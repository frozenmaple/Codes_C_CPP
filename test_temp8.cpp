/*
** test_temp8.c for TEST in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:38:45 2019 frozenmaple
** Last update Sat Oct 12 上午9:38:45 2019 frozenmaple
*/



#include <stdio.h>
#include <string.h> //为了使用下面的strlen()
int main()
{
	char name[51]; //准备最长50个字母的姓名放入该数组，最后一位留给'\0'
	char *p;
	printf("Please enter your name：");
	scanf("%50s", name); //数组名name已经可以代表地址了，所以此处不需要加上&

	int len;
	len = strlen(name);					//获得字符串长度，排除'\0'
										/*	此处如果用sizeof(name)；会得到结果51 ,可自行取消注释后用以下代码来验证 
	int size;
	size = sizeof(name);
	printf("%d",size);
*/
	for (p = name; p < name + len; p++) //name+len现在代表数组中遇到的第一个'\0'的地址
	{
		putchar(*p);
		putchar(' ');
	}

	return 0;
}
