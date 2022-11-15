/*
** demo_scanf_statement.c for scanf statements in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Nov 25 上午9:53:37 2019 frozenmaple
** Last update Tue Nov 25 上午9:57:10 2019 frozenmaple
*/

#include <stdio.h>
int main()
{
    int x;
    scanf("%3d", &x);   //%3d is used for only obtain the first three number from keyboard
    printf("%d\n", x);
    
    printf("\n");
    
    int y1 = 1, y2 = 123, y3=1234;
    printf("%3d\n", y1);
    printf("%3d\n", y2);
    printf("%3d\n", y3);

    return 0;
}
