/*
** precedence_pointer_arithmetic.cpp for precedence in pointer, prefix and postfix operator in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 21 4:01:44 PM 2022 frozenmaple
** Last update Fri Oct 21 4:01:44 PM 2022 frozenmaple
*/

#include <stdio.h>

int main()
{
    int data[2] = {100, 200};
    int moredata[2] = {300, 400};
    int *p1, *p2, *p3;
    p1 = p2 = data;
    p3 = moredata;
    printf("At first, *p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);
    printf("Then, *p1++ = %d, *++p2 = %d, (*p3)++=%d\n\n", *p1++, *++p2, (*p3)++);
    printf("At last, *p1 = %d, *p2 = %d, *p3 = %d\n\n", *p1, *p2, *p3);
    return 0;
}