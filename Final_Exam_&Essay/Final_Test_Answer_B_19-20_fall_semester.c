/*
** test_temp9.c for final test review in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:38:53 2019 frozenmaple
** Last update Wed Nov 19 下午9:02:55 2019 frozenmaple
*/

#include <stdio.h>
#include <string.h>
int main()
{
    /*
    int a, b;
    int *p1, *p2;
    a = 1;
    b = 2;
    p1 = &a;
    p2 = &b;
    b = *p1;
    printf("*p1 = % d, *p2 = %d\n", *p1, *p2);
    *p1 = 15;
    printf("a = %d, b = %d\n", a, b);
    *p1 = *p1 - 3;
    printf("a = %d, b = %d\n", a, b);
    *p2 = *p1;
    printf("a = %d, b = %d\n", a, b);
    (*p1)++;
    printf("a = %d, *p2 = %d\n", a, *p2);
    p1 = p2;
    *p1 = 50;
    printf("a = % d, b = % d\n", a, b);
    */

    /*
    int a[2][3] = { 1, 2, 3, 4, 5, 6 };
    printf("%d\n", **a);
    printf("%d\n", *(*(a + 1)));
    printf("%d\n", *(*(a + 1) + 1));
    */

    /*
    float f[] = { 1.25, 11.0, 9.5, 3.5, 6.5, 1.0 };
    float *p;
    p = f;
    printf("%.2f\n",*p);
    printf("%.2f\n", *p+3);
    printf("%.2f\n", *(p+3));
    */

    /*
    int a = 1, b = 10, c = 5, d;
    printf("%d\n", b * 10 + c - a * 5);
    printf("%d\n", (a + b - 1) / c);
    printf("%d\n", ((-a % c) + b) * c);
    printf("%d\n", c--);
    printf("%d\n", a++ + b++);
    */

    /*
    int i, c1 = 0, c2 = 0;
    int a[] = {6, 7, 3, 13, 11, 5, 1, 15, 9, 4};
    for (i = 0; i < 10; i++)
    {
        if (i % 2 != 0)
            c1++;
        if (a[i] % 2 != 0)
            c2++;
    }
    printf("c1=%d, c2=%d\n",c1,c2);
    */

    /*
    char letters[3] = {'A', 'B', 'D'};
    char *ptr, c;
    ptr = letters + 1;
    
    //printf("%c\n", *(ptr + 1));
    
    
    //printf("%c\n", ++*ptr);
    printf("%p\n", ptr);
    c = *ptr++;             //equal to "c = *(ptr++)"
    printf("%p\n", ptr);
    printf("%c\n", c);
    printf("%c\n", *ptr);
    */

    ///*
    char chars[] = "a*b*c**d";
    char *p = chars;
    int count = strlen(chars);
    while (p < chars + (sizeof(chars) / sizeof(char)))
    {
        if (*p == '*')
        {
            *p = '_';
        }
        p++;
    }
    for (p = chars; p < chars + count; p++)
    {
        printf("%c", *p);
    }
    printf("\n");
    //*/

    return 0;
}
