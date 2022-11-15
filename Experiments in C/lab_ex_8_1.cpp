/*
** lab_ex_8_1.c for lab experiment 8_1 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Dec 13 下午1:35:03 2019 frozenmaple
** Last update Sat Dec 13 下午2:27:25 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 6

int main()
{
    char str[SIZE] = "hello";
    char str_temp[SIZE];
    FILE *fp;
    int i, count;

    if ((fp = fopen("array.txt", "w+")) == NULL)
    {
        printf("error on opening the file with name of array.txt\n");
        return EXIT_FAILURE;
    }

    //write data from str[] into the file
    fprintf(fp, "%s", str);

    //relocat the fp pointer
    rewind(fp);

    //read data from the file into str_temp[]
    fscanf(fp, "%s", str_temp);

    fclose(fp);
    printf("%s\n", str_temp);

    return 0;
}