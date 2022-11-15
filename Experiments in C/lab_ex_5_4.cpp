/*
** lab_ex_5_4.c for C Codes in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午2:31:18 2019 frozenmaple
** Last update Fri Oct 11 下午2:31:18 2019 frozenmaple
*/


/*
写一个程序读入你的姓名，然后每个字母间加一个空格后输出。例如，姓名John显示为J o h n。
*/
#include <stdio.h>

int main(void)
{
    char name[100];
    char *p = name;

    printf("请输入你的姓名：");
    scanf("%s", name);

    while (*p != '\0')
    {
        putchar(*p);
        putchar(' ');
        p++;
    }

    return 0;
}