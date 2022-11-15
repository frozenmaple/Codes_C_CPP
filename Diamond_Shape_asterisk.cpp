/*
** Diamond_Shape_asterisk.c for Diamond Shape in Asterisk Symbol in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午1:01:01 2019 frozenmaple
** Last update Fri Oct 11 下午1:01:01 2019 frozenmaple
*/

//打印*菱形

#include <stdio.h>

int main( )
{
	int i, j, n, k;      //i是行数；j是列数；n是输入数字；k用于循环 
	printf( "Please input n: " );
	scanf( "%d", &n );
	printf( "Output:\n" );
	
	//上半部分 
	for( i = 1; i <= n; i++ )
	{
		//打印上半部分当前行的开头的空格部分 
		for( j = 1; j < n + 1 - i; j++ )
			printf( " " );
			
		//打印当前行的* 
		for(k=1;k<=2*i-1;k++)
			printf("*");
		
		printf( "\n" );	 
	}
	
	//下半部分 
	for( i = n+1; i <= 2*n-1 ; i++ )
	{
		//打印下半部分当前行的开头的空格部分
		for( j = i - n; j > 0; j-- )
			printf( " " );
		
		//打印当前行的*
		for(k=1;k<=2*(2*n-i)-1;k++)
			printf("*");
		
		printf( "\n" );
	}
	
	
	return 0;	
}
