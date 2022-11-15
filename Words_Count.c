
//输入一行字符，统计其中有多少个单词（单词之间以空格分隔）
#include<stdio.h>
#define N 100
int main()
{
	char words[N];
	gets(words);
	char a;
	int i=0,j,k=1;
	while(words[i]!='\0')
	{
		i=i+1;
		if(words[i]==' ')
			k=k+1;
	}
	printf("there are %d words",k);
}
