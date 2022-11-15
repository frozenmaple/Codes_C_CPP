/*
** Array_Target_Point.c for Target Point in an Array in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午1:33:08 2019 frozenmaple
** Last update Fri Oct 11 下午1:33:08 2019 frozenmaple
*/


//求数组鞍点 

#include<stdio.h>
#define ROW 3		//数组行数 
#define COL 4 		//数组列数 
int main()
{
	int array[ROW][COL];
	int i,j,k,maxj,max_temp,flag;
	
	
	//对数组进行初始化
	printf("Please enter %d numbers:\n",ROW*COL);
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&array[i][j]);
		}
	} 
	
	printf("\n\n");			//separate purpose
	
	//显示出整个数组
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%5d",array[i][j]);
		}
		printf("\n");
	}  
	printf("\n\n");			//separate purpose
	
	//search for target point(max in current row and min in current column)
	for(i=0;i<ROW;i++)
	{
		max_temp=array[i][0];	//给定每行的第一个值为最大值
		for(j=0;j<COL;j++)
		{
			if(max_temp<array[i][j])
			{
				max_temp=array[i][j];
				maxj=j; 			//max_temp为当前行的最大值，maxj为当前列数
			}
		}
		flag = 1;	//每扫完一遍列数，当前行肯定能找到最大值，所以先将flag置1 
					
	
	//接下来测试max_temp是否为当前maxj列的最小值 
		for(k=0;k<ROW;k++)
		{
			if(max_temp>array[k][maxj])
			{
				flag = 0;			//如果有更小值，则flag置0，并提前结束循环 
				break;
			}
		} 
		
		if(flag)
		{
			printf("array[%d][%d] is the target point\n",i,maxj);
			printf("its value is %d\n",array[i][maxj]);
			break;
		}
	} 
	if(!flag)
	{
		printf("No target point in this array\n");
	} 
	return 0;
}
