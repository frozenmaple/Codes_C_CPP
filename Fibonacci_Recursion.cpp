/*
** Fibonacci_Recursion.cpp for Using recursion to get fibonacci in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Oct 17 10:23:59 AM 2022 frozenmaple
** Last update Tue Oct 17 10:25:26 AM 2022 frozenmaple
*/

#include <stdio.h>
int fibonacci(int n);

int main()
{
    int i;
    printf("please input a number: ");
    scanf("%d", &i);
    printf("fibonacci(%d) is %d\n", i, fibonacci(i));
    return 0;
}

/*
Fibonacci series: 1 1 2 3 5 8 13...
F(1)=1, F(2)=1, F(n)=F(n - 1)+F(n - 2) (when n>2)
*/
int fibonacci(int n)
{
    int ans;
    if (n > 2)
        ans = fibonacci(n - 1) + fibonacci(n - 2);
    else
        ans = 1;
    return ans;
}
