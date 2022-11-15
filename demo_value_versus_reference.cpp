/*
** demo_value_versus_reference.c for pass_by_value_versus_by_reference in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:36:50 2019 frozenmaple
** Last update Tue Dec 2 上午10:44:42 2019 frozenmaple
*/

#include <stdio.h>

//declaration for two functions to compare.
void swap_by_reference(int *a, int *b);
void swap_by_value(int c, int d);
void newline(void);                     //print a line to separate the results

int main()
{
    int a = 3;
    int b = 5;
    printf("Passing by reference\n");
    printf("Before swapping, values are %d,%d\n", a, b);
    swap_by_reference(&a, &b);
    printf("After swapping, values are %d,%d\n", a, b);

    newline();

    int c = 3;
    int d = 5;
    printf("Passing by value\n");
    printf("Before swapping, values are %d,%d\n", c, d);
    swap_by_value(c, d);
    printf("After swapping, values are %d,%d\n", c, d);
    return 0;
}

void swap_by_reference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void swap_by_value(int c, int d)
{
    int temp;
    temp = c;
    c = d;
    d = temp;
}

void newline(void)
{
    printf("----------------------------------\n");
}