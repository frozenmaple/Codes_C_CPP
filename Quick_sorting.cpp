/*
** Quick_sorting.cpp for using recursion to quick sorting in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Wed Nov 11 9:26:16 AM 2020 frozenmaple
** Last update Wed Nov 11 9:26:16 AM 2020 frozenmaple
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define SWAP(a, b) \
    {              \
        int temp;  \
        temp = a;  \
        a = b;     \
        b = temp;  \
    }
#define SIZE 101

void quick_sort_sub(int *data, int left, int right)
{
    int left_index = left;
    int right_index = right;
    int pivot = data[(left + right) / 2];

    while (left_index <= right_index)
    {
        for (; data[left_index] < pivot; left_index++)
            ;
        for (; data[right_index] > pivot; right_index--)
            ;
        if (left_index <= right_index)
        {
            SWAP(data[left_index], data[right_index]);
            left_index++;
            right_index--;
        }
    }
    // After above sorting, left_index > right_index

    // to sort the left half of data
    if(right_index>left)
    	quick_sort_sub(data, left, right_index);
    // to sort the right half of data
    if (left_index < right)
        quick_sort_sub(data, left_index, right);
}

void quick_sort(int *data, int data_size)
{
    quick_sort_sub(data, 0, data_size - 1);
}


int main()
{
    int data[SIZE];
    /*输入一个随机整数数组*/
    int i;
    time_t t = time(NULL);
    srand(t);
    printf("The original array is: \n");
    for (i = 0; i < SIZE; i++)
    {
        data[i] = rand() % SIZE;
        printf("%d ", data[i]);
    }
    printf("\n");
    quick_sort(data, SIZE);
    printf("After sorting: \n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;
}