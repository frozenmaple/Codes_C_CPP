/*
** lab_ex_3_2.c for leap year in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午12:49:41 2019 frozenmaple
** Last update Sun Nov 16 下午1:23:15 2019 frozenmaple
*/


/*用于判断是否为闰年 */
#include<stdio.h>
int main()
{
	int year;
	printf("input the year: ");
	scanf("%d",&year); 
	if( (year%4==0 && year%100!=0) || (year%400==0) )	
		printf("%d is a leap year\n",year);
	else
		printf("%d is not a leap year\n",year);
	return 0;
}
