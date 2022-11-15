/*
** Final_Test_Answer_A.c for final test review for 21-22 fall semester in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:38:53 2019 frozenmaple
** Last update Tue Dec 6 3:00:34 PM 2021 frozenmaple
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NUM 3
void my_func(float *, int);
int main()
{
    /*
    int a, b;
    int *p1, *p2;
    a = 2;
    b = 1;
    p1 = &a;
    p2 = &b;
    b = *p1;
    printf("*p1 = % d, *p2 = %d\n", *p1, *p2);
    *p1 = 15;
    printf("a = %d, b = %d\n", a, b);
    *p1 = *p1 + 3;
    printf("a = %d, b = %d\n", a, b);
    *p2 = *p1;
    printf("a = %d, b = %d\n", a, b);
    (*p1)--;
    printf("a = %d, *p2 = %d\n", a, *p2);
    p2 = p1;
    *p1 = 50;
    printf("a = % d, b = % d\n", a, b);
    */

    /*
    int a = 1, b = 10, c = 5, d;
    printf("%d\n", b / c + 1);
    printf("%d\n", b % 3);
    printf("%d\n", b - 3 * c / 5);
    printf("%d\n", ++c);
    printf("%d\n", a++ - 2);
    */

    /*
    char a[6] = "hello";
    char *ptr, c;
    c = *a+2;    printf("%c\n", c);
    ptr=a;	c=*ptr++;	printf("%c\n", c);
    ptr=a;	c=*++ptr;	printf("%c\n", c);

    float price = 2.343;
    printf("The item is worth $%2.2f\n", price);
    
    
    int i; char ch;
	for(i=0,ch='B';i<4;i++,ch+=i)
		printf("%c",ch);
	printf("\n");
	
	int n,m;
	for(n=4,m=6;n<m;n*=2,m+=2)
		printf("%d %d\n",n,m);
	
	     
    int x = 2;
    while (++x<4)
    {
        printf("%2d", x);
    }
    printf("\n");
    
    


    int a[3][2] = {{4, 6}, {1, 3}, {9, 7}};
    printf("%d\n", **a);
    printf("%d\n", *(*(a + 1)));
    printf("%d\n", *(*(a + 1) + 1));
    printf("%d\n", *(*(a + 1) + 1)+1);
	*/

    /* 填空题 5
    int one_d[] = {1, 3, 4, 5, -1};
    int *p;
    p = one_d;
    printf("%d\n", *p);
    printf("%d\n", *p + 4);
    printf("%d\n", *(p + 4));
    */

    /* 填空题 6
    int x = 2;
    x += 5;
    printf("x=%d\n", x);

    x *= 10;
    printf("x=%d\n", x);

    x /= 8;
    printf("x=%d\n", x);

    x %= 3;
    printf("x=%d\n", x);
    


    int i, j;
    for (i = 4; i>0; i--)
    {
        for (j = 0; j<i; j++)
            printf("X");
        printf("@");
    }
    
    

    
    int i, c1 = 0, c2 = 0;
    int a[] = {1, 7, 3, 13, 15, 5, 11, 15, 9, 4};
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            c1++;
        if (a[i] % 2 == 0)
            c2++;
    }
    printf("c1=%d, c2=%d\n",c1,c2);
    

   
	char *ptr="world";
	printf("%c\n",*ptr);
	printf("%s\n",ptr+1);
	*/
	float score[NUM];
	int i;
	for(i=0;i<NUM;i++)
		scanf("%f",&score[i]);
	my_func(score,NUM); 
    return 0;
}

void my_func(float *array, int size)
{
	float sum=0;
	int i;
	for(i=0;i<size;i++)
		sum=sum+array[i];
	printf("%.2f\n",sum/size);	
}
