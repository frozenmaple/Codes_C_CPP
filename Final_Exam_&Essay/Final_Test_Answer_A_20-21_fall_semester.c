/*
** Final_Test_Answer_A.c for final test review for 20-12 fall semester in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:38:53 2019 frozenmaple
** Last update Mon Jun 28 上午11:52:47 2020 frozenmaple
*/

#include <stdio.h>
#include <string.h>
int main()
{
    /*
    int a, b;
    int *p1, *p2;
    a = 2;
    b = 1;
    p1 = &a;
    p2 = &b;
    b = *p1;
    printf("*p1 = % d, *p2 = %d\n", *p1, *p2);
    *p1 = 15;
    printf("a = %d, b = %d\n", a, b);
    *p1 = *p1 + 3;
    printf("a = %d, b = %d\n", a, b);
    *p2 = *p1;
    printf("a = %d, b = %d\n", a, b);
    (*p1)--;
    printf("a = %d, *p2 = %d\n", a, *p2);
    p2 = p1;
    *p1 = 50;
    printf("a = % d, b = % d\n", a, b);
    */

    /*
    int a = 1, b = 10, c = 5, d;
    printf("%d\n", b / c + 1);
    printf("%d\n", b % 3);
    printf("%d\n", b - 3 * c / 5);
    printf("%d\n", ++c);
    printf("%d\n", a++ - 2);
    */

    /*
    char letters[3] = { 'A', 'B', 'C' };
    char *ptr, c;
    ptr = letters + 1;
    printf("%c", *(letters + 2));
    printf("%c", *++ptr);
    printf("%c", *ptr++);

    float price = 2.345;
    printf("The item is worth $%2.2f\n", price);
    printf("!(100!=3) is %d\n", !(100 != 3));

    printf("%d\n", 3 + 4 > 2 && 3 < 2);
    */

    /* 填空题2
    int x,y;
    y = x = (2+3)/4;
    printf("x=%d, y= %d\n",x,y);

    x = (int)3.8 + 3.3;
    printf("x=%d\n", x);

    x = (2 + 3) * 10.5;
    printf("x=%d\n", x);

    x = 3 / 5 * 22.0;
    printf("x=%d\n", x);

    x = 22.0 * 3 / 5;
    printf("x=%d\n", x);
    */

    /* 填空题3
    int x = 0;
    while (++x<3)
    {
        printf("%2d", x);
    }
    printf("\n");
    */

    /* 填空题 4
    int a[3][2] = {{4, 6}, {1, 3}, {9, 7}};
    printf("%d\n", **a);
    printf("%d\n", *(*(a + 1)));
    printf("%d\n", *(*(a + 2) + 1));
    */

    /* 填空题 5
    int one_d[] = {1, 3, 4, 5, -1};
    int *p;
    p = one_d;
    printf("%d\n", *p);
    printf("%d\n", *p + 4);
    printf("%d\n", *(p + 4));
    */

    /* 填空题 6
    int x = 2;
    x += 5;
    printf("x=%d\n", x);

    x *= 10;
    printf("x=%d\n", x);

    x -= 6;
    printf("x=%d\n", x);

    x /= 8;
    printf("x=%d\n", x);

    x %= 3;
    printf("x=%d\n", x);
    */

    /* 填空题 7
    int i, j;
    for (i = 1; i<=5; i++)
    {
        for (j = 0; j<i; j++)
            printf("$");
        printf("\n");
    }
    */

    /*  填空题  8
    int i, c1 = 0, c2 = 0;
    int a[] = {6, 7, 3, 13, 11, 5, 1, 15, 9, 4};
    for (i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
            c1++;
        if (a[i] % 2 == 0)
            c2++;
    }
    printf("c1=%d, c2=%d\n",c1,c2);
    */

    /* 填空题 9
    int *ptr;
    int torf[2][2] = {12, 14, 16};
    ptr = torf[0];
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 2));

    int fort[2][2] = {{12}, {14, 16}};
    ptr = fort[0];
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr + 2));
    */

    /* 编程题 2 */
    int counter, i = 0;
    printf("Print coutine 10 numbers\n");
    printf("Please input the start numbers: ");
    scanf("%d", &counter);
    while (i++<11)
    {
        printf("%d ", counter++);
    }
    printf("\n");

    return 0;
}
