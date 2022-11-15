/*
** Demo_Incre_pointer.cpp for demo for increment operator and reference operator mixed cases in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Wed Dec 30 9:57:37 AM 2020 frozenmaple
** Last update Thu Dec 30 9:58:05 AM 2020 frozenmaple
*/

#include <stdio.h>
#define SIZE 5
void display(int a[], int size);

int main(void)
{
    int num1[] = {1, 3, 5, 7, 9};
    int *ptr1 = num1;
    int temp1 = *ptr1;

    printf("Before, temp1 = %d, ptr1 is %p, And array is: ", temp1, ptr1); /*一开始temp1和ptr1的值*/
    display(num1, SIZE);                                                   /*一开始数组num1里的值*/

    temp1 = *++ptr1;

    printf("After, temp1 = %d, ptr1 is %p, And array is: ", temp1, ptr1); /*最后temp1和ptr1的值*/
    display(num1, SIZE);                                                  /*最后数组num1里的值*/

    printf("\n-------------------------------------------\n");

    int num2[] = {1, 3, 5, 7, 9};
    int *ptr2 = num2;
    int temp2 = *ptr2;

    printf("Before, temp2 = %d, ptr2 is %p, And array is: ", temp2, ptr2); /*一开始temp2和ptr2的值*/
    display(num2, SIZE);                                                   /*一开始数组num2里的值*/

    temp2 = ++*ptr2;

    printf("After, temp2 = %d, ptr2 is %p, And array is: ", temp2, ptr2); /*最后temp2和ptr2的值*/
    display(num2, SIZE);                                                  /*最后数组num2里的值*/

    printf("\n-------------------------------------------\n");

    int num3[] = {1, 3, 5, 7, 9};
    int *ptr3 = num3;
    int temp3 = *ptr3;
    printf("Before, temp3 = %d, ptr3 is %p, And array is: ", temp3, ptr3); /*一开始temp3和ptr3的值*/
    display(num3, SIZE);                                                   /*一开始数组num3里的值*/

    temp3 = *ptr3++;

    printf("After, temp3 = %d, ptr3 is %p, And array is: ", temp3, ptr3); /*最后temp3和ptr3的值*/
    display(num3, SIZE);                                                  /*最后数组num3里的值*/

    printf("\n-------------------------------------------\n");

    int num4[] = {1, 3, 5, 7, 9};
    int *ptr4 = num4;
    int temp4 = *ptr4;
    printf("Before, temp4 = %d, ptr4 is %p, And array is: ", temp4, ptr4); /*一开始temp4和ptr4的值*/
    display(num4, SIZE);                                                   /*一开始数组num4里的值*/

    temp4 = (*ptr4)++;

    printf("After, temp4 = %d, ptr4 is %p, And array is: ", temp4, ptr4); /*最后temp4和ptr4的值*/
    display(num4, SIZE);                                                  /*最后数组num4里的值*/

    return 0;
}

void display(int a[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
