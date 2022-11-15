/*
** lab_ex_6_2.c for C Codes in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午2:51:11 2019 frozenmaple
** Last update Fri Oct 11 下午2:51:11 2019 frozenmaple
*/


#include <stdio.h>

//function declaration
int my_sum(int n);  

int main()
{
    int i, sum;
    printf("please enter a number: \n");
    scanf("%d", &i);

    sum = my_sum(i);
    printf("The sum of 1+2+...+n is %d\n", sum);
    return 0;
}

int my_sum(int n)
{
    int i, temp_sum = 0;

    //to get 1+2+...n
    for (i = 1; i <= n; i++) 
    {
        temp_sum = temp_sum + i;    
    }
    
    return temp_sum;
}