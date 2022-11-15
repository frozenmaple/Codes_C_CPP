/*
** test_demo_1.c for test_demo in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 10 9:24:56 PM 2020 frozenmaple
** Last update Thu Dec 30 1:12:48 PM 2020 frozenmaple
*/

#include <ctype.h>
#include <stdio.h>
int getword(char *, int SIZE, FILE *fp);
int main()
{
	char buf[1024];
	FILE *fp = NULL;
	while(getword(buf, 1024,stdin)!= EOF)
	{
		printf("%s", buf);
	}
	return 0;
}

int getword(char * buf,int SIZE,FILE *fp)
{
	int len;
	char ch;

	while((ch = getc(fp)) != EOF && !isalnum(ch))
		;

	if(ch==EOF)
		return EOF;
	len = 0;
	do
	{
		buf[len++] = ch;
	} while ((ch = getc(fp)) != EOF&& isalnum(ch));
	buf[len] = '\0';
	return len;
}