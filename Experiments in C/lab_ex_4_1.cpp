/*
** lab_ex_4_1.c for sum of odd integers between 1 to 99 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午1:44:17 2019 frozenmaple
** Last update Sat Oct 11 下午1:56:03 2019 frozenmaple
*/

#include <stdio.h>
#define count 99
int main()
{
    int i, sum = 0;
    int a[count]={0};
    
    //save 1-99 to a[n]
    for (i = 0; i < count; i++) 
    {
        a[i] = i + 1;
    }
    
    //choose odd number in the array, then add them all
    for (i = 0; i < count; i++) 
    {
        if (a[i]%2!=0) 
        {
            sum = sum + a[i];
        }
    }
    
    printf("The sum of odd integers in the array is %d\n", sum);
    return 0;
}