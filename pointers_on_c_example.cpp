/*
** pointers_on_c_example.c for pointers on c example in c:\Users\froze\Documents\C Codes
** 从标准输入中读取输入行并在标准输出中打印这些输入行
** 输入的第1行是一串列标号，串的最后以一个负数结尾
** 这些列标号成对出现，说明需要打印的输入行的列的范围
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Mar 4 上午10:36:43 2019 frozenmaple
** Last update Tue Jun 3 上午9:58:45 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef MAX_COLS
#define MAX_COLS 20
#endif // MAX_COLS,所能处理的最大列号
#ifndef MAX_INPUT
#define MAX_INPUT 1000
#endif // MA1000T，每个输入行的最大长度



int read_column_numbers(int columns[], int max);
void rearrange(char *output, char const *input, int n_columns, int const columns[]);

int main(int argc, char const *argv[])
{
    int n_columns;
    int columns[MAX_COLS];
    char input[MAX_INPUT];
    char output[MAX_INPUT];

    n_columns = read_column_numbers(columns, MAX_COLS);

    while (fgets(input,MAX_INPUT,stdin) != NULL)
    {
        printf("Original input : %s\n", input);
        rearrange(output, input, n_columns, columns);
        printf("Rearranged line: %s\n", output);
    }

    return EXIT_SUCCESS;
}

int read_column_numbers(int columns[], int max)
{
    int num = 0;
    int ch;

    while (num < max && scanf("%d", &columns[num]) == 1 && columns[num] >= 0)
    {
        num += 1;
    }

    if (num % 2 != 0)
    {
        puts("Last column number is not paired.");
        exit(EXIT_FAILURE);
    }

    while ((ch = getchar()) != EOF && ch != '\n')
    {
        ;
    }

    return num;
}

void rearrange(char *output, char const *input, int n_columns, int const columns[])
{
    int col;
    int output_col;
    int len;

    len = strlen(input);
    output_col = 0;

    for (col = 0; col < n_columns; col += 2)
    {
        int nchars = columns[col + 1] - columns[col] + 1;

        if (columns[col] >= len || output_col == MAX_INPUT - 1)
        {
            break;
        }

        if (output_col + nchars > MAX_INPUT - 1)
        {
            nchars = MAX_INPUT - output_col - 1;
        }

        strncpy(output + output_col, input + columns[col], nchars);
        output_col += nchars;       
    }
    output[output_col] = '\0';
}