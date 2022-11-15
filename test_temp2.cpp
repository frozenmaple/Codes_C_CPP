/*
** test_temp2.c for test of relation statement in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:36:39 2019 frozenmaple
** Last update Mon Oct 11 7:08:23 AM 2020 frozenmaple
*/

/* Program example P3A
    Introduction to the arithmetic operators in C. */
#include <stdio.h>
int main()
{
    ///*
    int a[] = {1, 2, 3, 4, 5}, *p, i;

    p = a;
    i = 2;

    printf("a[i] is %d\n", a[i]);
    printf("p[i] is %d\n", p[i]);

    printf("*(a+i) is %d\n", *(a + i));
    printf("*(p+i) is %d\n", *(p + i));
    //*/

    /*注意二级指针和一级指针的位移基础长度不同
    int a[3][3] = {{0, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    printf("*(*(a+1)) is %d\n", *(*(a + 1)));
    printf("*(*a+1) is %d\n", *(*a + 1));
    printf("*(*a)+1 is %d\n", *(*a) + 1);
    */

    /*
    int a[3][2] = {4,6,1,3,9,7};
    int **ptr1, *ptr2;
    int(*ptr3)[2];
    ptr1 = a;
    ptr2 = a[0];
    ptr3 = a;
    printf("*(ptr1 + 1) is %d\n", *(ptr1 + 1));
    printf("*(ptr2 + 1) is %d\n", *(ptr2 + 1));
    printf("**(ptr3+1) is %d\n", **(ptr3+1));
    */
    //printf("*(a + 1) is %d\n", **(a + 1));
    //printf("*(a + 1) is %d\n", *(*a + 1));
    //printf("**(a+1) is %d\n", **(a + 1));
    return 0;
}
