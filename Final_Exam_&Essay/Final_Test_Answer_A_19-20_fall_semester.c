/*
** test_temp9.c for final test review in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:38:53 2019 frozenmaple
** Last update Mon Nov 17 下午9:03:06 2019 frozenmaple
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
    int a[3][2] = {{4, 6}, {1, 3}, {9, 7}};
    printf("%d\n", **a);
    printf("%d\n", *(*(a + 1)));
    printf("%d\n", *(*(a + 2) + 1));
    */

    /*
    int one_d[] = {1, 3, 4, 5, -1};
    int *p;
    p = one_d;
    printf("%d\n",*p);
    printf("%d\n", *p+4);
    printf("%d\n", *(p+4));
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

    char letters[3] = { 'A', 'B', 'C' };
    char *ptr, c;
    ptr = letters + 1;
    printf("%c", *(letters + 2));
    printf("%c", *++ptr);
    printf("%c", *ptr++);

    return 0;
}
