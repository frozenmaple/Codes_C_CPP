/*
** test_temp9.cpp for Simple_fraction_arithmetic_display in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Mon Sep 26 10:53:41 AM 2022 frozenmaple
** Last update Mon Sep 26 10:53:41 AM 2022 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int Gcd(int x, int y);

int main()
{
    int T;
    int op, a, b, c, d;
    int m, n;
    int i, j;
    int **array;
    printf("Please input the value of T: ");
    scanf("%d", &T);

    array = (int **)malloc(T * sizeof(int *));
    for (i = 0; i < SIZE; i++)
    {
        array[i] = (int *)malloc(T * sizeof(int));
    }

    printf("Please input the values of arrays:\n");
    for (i = 0; i < T; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    printf("\n\n");

    for (i = 0; i < T; i++)
    {
        op = array[i][0];
        a = array[i][1];
        b = array[i][2];
        c = array[i][3];
        d = array[i][4];

        if (op == 1)
        {
            m = a * d + b * c;
            n = b * d;
            printf("%d/%d\n", m / Gcd(m, n), n / Gcd(m, n));
        }
        else if (op == 0)
        {
            m = a * d - b * c;
            n = b * d;
            printf("%d/%d\n", m / Gcd(m, n), n / Gcd(m, n));
        }
        else
        {
            printf("wrong operation\n");
        }
    }
    return 0;
}

int Gcd(int m, int n)
{
    while (n != 0)
    {
        int t = m % n;
        m = n;
        n = t;
    }
    return m;
}