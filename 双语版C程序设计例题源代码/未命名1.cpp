#include<stdio.h>
int main()
{
	int i = 5,j =6, k=0;
	printf("%d,%d,%d\n",i,j,k);
	
	i++;++j;				//hint: equivalent to i=i+1;j=j+1
	printf("%d,%d,%d\n",i,j,k);
	
	i--;--j;
	printf("%d,%d,%d\n",i,j,k);
	
	k=(i++)+(++j);
	printf("%d,%d,%d\n",i,j,k);
	
	k=(i--)+(--j);
	printf("%d,%d,%d\n",i,j,k);
	
	i=j=k=7;
	printf("%d,%d,%d\n",i,j,k);
	
	k+=i++;
	printf("%d,%d,%d\n",i,j,k);
	
	k%=++i;
	printf("%d,%d,%d\n",i,j,k);
	
	k*=j--;
	printf("%d,%d,%d\n",i,j,k);
}
