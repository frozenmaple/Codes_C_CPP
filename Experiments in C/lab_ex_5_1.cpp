/*
** lab_ex_5_1.c for replace blank elements into underscore symbol in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午2:14:58 2019 frozenmaple
** Last update Sat Sep 9 1:47:43 PM 2022 frozenmaple
*/


/*
给定如下的数组：
char chars[] = { 'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd' } ;
写一个程序将数组中所有的空格字符替换为下划线字符'_'。使用指针而不是下标访问数组元素。
*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    char *p;

    p = chars;
    printf("The original array is: ");
    while (p < chars + (sizeof(chars) / sizeof(char)))
    {
        putchar(*p);
        p++;
    }
    printf("\n");

    p = chars;
    while (p < chars + (sizeof(chars) / sizeof(char)))
    {
        if (*p == ' ')
        {
            *p = '_';
        }
        p++;
    }

    printf("The revised array is: ");
    p = chars;
    while (p < chars + (sizeof(chars) / sizeof(char)))
    {
        printf("%c", *p);
        p++;
    }

    printf("\n");

    return 0;
}