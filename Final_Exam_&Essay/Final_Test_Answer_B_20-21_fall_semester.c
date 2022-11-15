/*
** test_temp9.c for final test review in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:38:53 2019 frozenmaple
** Last update Mon Jun 28 下午3:35:42 2020 frozenmaple
*/

#include <stdio.h>
#include <string.h>
#define WEEK_PER_DAY 7
int main()
{
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
    */

    /* 选择题 11
    float price = 2.345;
    printf("The item is worth $%2.3f\n", price);

    /* 填空题2
    int x,y;
    x = (2+3)/6;
    printf("x=%d\n", x);

    y = 3+2*(x=7/2);
    printf("x=%d, y= %d\n", x, y);

    x = (2 + 3) * 10.5;
    printf("x=%d\n", x);

    x = 22.0 * 3 / 5;
    printf("x=%d\n", x);
    */

    /* 填空题 3
    int a[2][3] = {1, 2, 3, 4, 5, 6};
    printf("%d\n", **a);
    printf("%d\n", *(*(a+1)));
    printf("%d\n", *(*(a+1)+1));
    */

    /* 填空题 4
    float f[] = { 1.25, 11.0, 9.5, 3.5, 6.5, 1.0 };
    float *p;
    p = f;
    printf("%.2f\n",*p);
    printf("%.2f\n", *p+3);
    printf("%.2f\n", *(p+3));
    */

    /* 填空题 5
    int a = 1, b = 10, c = 5, d;
    printf("%d\n", b * 10 + c - a * 5);
    printf("%d\n", (a + b - 1) / c);
    printf("%d\n", ((-a % c) + b) * c);
    printf("%d\n", c--);
    printf("%d\n", a++ + b++);
    */

    /* 填空题 7
    int (*ptr)[2];
    int torf[2][2] = {12, 14, 16};
    ptr = torf;
    printf("%d\n", *(*ptr));
    printf("%d\n", **(ptr + 1));

    int fort[2][2] = {{12}, {14, 16}};
    ptr = fort;
    printf("%d\n", **ptr);
    printf("%d\n", **(ptr + 1));
    */

    /* 填空题 8
    char letters[3] = {'A', 'B', 'E'};
    char *ptr, c;
    ptr = letters + 1;
    printf("%c\n", *(ptr + 1));
    // ptr = letters + 1;
    printf("%c\n", ++*ptr);
    // ptr = letters + 1;
    printf("%c\n", *ptr++);
    // ptr = letters + 1;
    // printf("%c\n", (*(ptr++)));
    // ptr = letters + 1;
    // printf("%c\n", *(++ptr));
    // ptr = letters + 1;
    // printf("%c\n", *++ptr);
    */

    /* 填空题 10
    char text[10] = "some text";
    printf("%c\n", *(text + 1));
    printf("%s\n", text + 1);
    *(text + 4) = '\0';
    printf("%s\n", text);
    */

    /* 编程题 2 */
    int days, weeks, input;
    printf("Convert days to weeks\n");
    printf("Please input the number of days(<=0 to quit)");
    scanf("%d", &input);
    while (input > 0)
    {
        weeks = input / WEEK_PER_DAY;
        days = input % WEEK_PER_DAY;
        printf("%d days are %d weeks, %d days\n", input, weeks, days);
        printf("Please input the number of days(<=0 to quit)");
        scanf("%d", &input);
    }
    printf("Program Exit\n");

    return 0;
}
