/*
** Demo_For_Class.cpp for Demo_for_class_teaching in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Nov 9 2:31:40 PM 2020 frozenmaple
** Last update Mon Nov 9 2:31:40 PM 2020 frozenmaple
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // Demo for type transfer
    int x, y;
    printf("input the value of x and y: ");
    scanf("%d,%d", &x, &y); // try x=5,y=3
    printf("x/y is: %d\n", x / y);
    printf("(float)(x/y) is: %f\n", (float)(x / y));
    printf("(float)x/y is: %f\n", (float)x / y);

    // Demo for pointer variables
    int hoge = 5;
    int *hoge_p;
    hoge_p = &hoge;
    printf("&hope is %p\n", &hoge);
    printf("&hoge_p is %p\n", &hoge_p);
    printf("hoge_p is %p\n", hoge_p);
    printf("hoge_p++ is %p\n", hoge_p + 1);
    printf("hoge_p+3 is %p\n", hoge_p + 3);

    // Demo for pointer variables arithmetic
    char var1 = 'a';
    char *ptr1 = &var1;
    int *ptr2 = (int *)ptr1;
    printf("ptr1 is %p\n", ptr1);
    printf("ptr2 is %p\n", ptr2);
    ptr1++;
    ptr2++;
    printf("ptr1 is %p\n", ptr1);
    printf("ptr2 is %p\n", ptr2);

    return 0;
}
