/*
** lab_ex_2_1.c for a simple encryption demo in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 上午10:26:25 2019 frozenmaple
** Last update Fri Oct 11 上午10:26:25 2019 frozenmaple
*/


#include <stdio.h>
int main()
{
    char c1 = 'C', c2 = 'h', c3 = 'i', c4 = 'n', c5 = 'a';
    printf("The original word is %c%c%c%c%c\n", c1, c2, c3, c4, c5);

    //the encryption law is use the fourth letter after the original letter
    //Combing ASCII code table
    c1 += 4;
    c2 += 4;
    c3 += 4;
    c4 += 4;
    c5 += 4;

    printf("The encrypted word is %c%c%c%c%c\n", c1, c2, c3, c4, c5);
    return 0;
}