/*
** Decimal_to_Binary.cpp for Transfer a decimal number into binary equivalent form in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Tue Oct 18 9:53:23 AM 2022 frozenmaple
** Last update Tue Oct 18 9:53:23 AM 2022 frozenmaple
*/

/* This code is based on P222 of textbook "C Primer Plus"*/
#include <stdio.h>
void deci_to_binary(unsigned long i);

int main()
{
    unsigned long i;
    printf("Please enter a number('q' to quit): ");

    // To check the return value of the scanf() to determine whether the while loop continues
    while (scanf("%lu", &i) == 1)
    {
        printf("The binary equivalent is: ");
        deci_to_binary(i);
        putchar('\n'); // change a new line
        printf("Enter a number(q to quit): ");
    }
    printf("Done\n"); // To display the message after the 'q' input
    return 0;
}

void deci_to_binary(unsigned long n)
{
    int r;

    /*
    This step should be called before the recursion, because statements in a recursive function
    come before the recursive call are executed in the same order that the functions are called
    */
    r = n % 2; // to store the last digit at this stage

    /*
    Use if() to terminate the recursion. As long as it is 2 or greater, there is one more binary
    number to be processed
    */
    if (n >= 2)
    {
        deci_to_binary(n / 2); // Each call needs to use a different value for the parameter.
    }

    /*
    The first digit you find is the last digit you want to print, hence this step should be
    called after the recursion. Because statements in a recursive function come after the
    recursive call are executed in the opposite order that the functions are called
    */
    putchar(r == 0 ? '0' : '1');
}