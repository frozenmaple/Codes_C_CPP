/*
** lab_ex_3_6.cpp for lab_exp_3_6 in /mnt/d/Codes/C_Lang/Experiments in C
** 逐行字符简易加密
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Tue May 11 2:10:32 PM 2021 frozenmaple
** Last update Wed May 11 2:11:55 PM 2021 frozenmaple
*/

#include<stdio.h>
#define SPACE ' '
int main()
{
    char ch;
    ch = getchar();
    while(ch != '\n')
    {
        if (ch==SPACE)
        {
            putchar(ch);
        }
        else
        {
            putchar(ch+1);
        }
        ch = getchar();
    }
    putchar(ch);
    return 0;
}