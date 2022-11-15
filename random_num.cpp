/*
** A function to generate random integer number in specified range(a,b)
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Thu May 16 下午2:10:53 2019 frozenmaple
** Last update Fri May 16 下午2:20:11 2019 frozenmaple
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int random_num(int a, int b);

int main()
{
    int x1, x2;
    printf("input two numbers for random_num range\n");
    scanf("%d", &x1);
    scanf("%d", &x2);
    int y;
    y = random_num(x1, x2);
    printf("\nThe random number is %d\n", y);
    return 0;
}

int random_num(int a, int b)
{
    srand((unsigned)time(NULL));
    return rand() % (b - a + 1) + a;
}