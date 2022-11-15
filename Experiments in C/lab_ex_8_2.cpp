/*
** lab_ex_8_2.c for lab experiment 8_2 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Dec 13 下午2:26:46 2019 frozenmaple
** Last update Sat Dec 13 下午2:38:37 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main()
{
    int nums[SIZE] = {1, 2, 3, 4, 5};
    int nums_temp[SIZE];
    FILE *fp;
    int count, i;

    if ((fp = fopen("numbers.dat", "wb")) == NULL)
    {
        printf("Error on opening the file\n");
        return EXIT_FAILURE;
    }

    count = fwrite(nums, sizeof(int), SIZE, fp);

    if (count != SIZE)
    {
        printf("Error on writing data into the file\n");
        return EXIT_FAILURE;
    }
    fclose(fp);

    if ((fp = fopen("numbers.dat", "rb")) == NULL)
    {
        printf("Error on opening the file\n");
        return EXIT_FAILURE;
    }

    count = fread(nums_temp, sizeof(int), SIZE, fp);
    if (count != SIZE)
    {
        printf("Error on reading data from the file\n");
        return EXIT_FAILURE;
    }
    fclose(fp);

    for (i = 0; i < count; i++)
    {
        printf("%d ", nums_temp[i]);
    }
    printf("\n");

    return 0;
}