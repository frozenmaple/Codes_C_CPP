//定义一个数组，从键盘输入10个整数，要求对该数组分别进行升序排序或降序排序，并且打印出来.
#include<stdio.h>
#define N 10
int main()
{
	int i,j,t;
	int num[N]={87,90,110,98,70,97,210,65,98,45};
	
/*	
	printf("please input 10 numbers:\n");
	for(i=0;i<N;i++)
	{
		scanf("%d",&num[i]);
	}
	printf("\n");
*/	

    //display the original array
	printf("the original array is:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",num[i]);
	}
	printf("\n\n-------------------------------\n");

	for(i=0;i<N-1;i++)
	{
		for(j=0;j<N-1-i;j++)
		{
			if(num[j]>num[j+1])
			{
				t=num[j+1];
				num[j+1]=num[j];
				num[j]=t;
			}
		}
	}
	
	//display the revised array
	printf("\nthe revised array is:\n");
	for(i=0;i<N;i++)
	{
		printf("%d ",num[i]);
	}
	
	
	return 0;
}
