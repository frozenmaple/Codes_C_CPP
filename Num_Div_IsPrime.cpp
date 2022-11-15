/*
** Num_Div_IsPrime.cpp for num divider and isPrime in /mnt/d/Codes/C_Lang
** 求一个数所有的约数，如果为素数的话，则打印出来
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Tue May 11 2:33:36 PM 2021 frozenmaple
** Last update Wed May 11 2:58:32 PM 2021 frozenmaple
*/

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int num, div;
    bool isPrime;

    printf("Enter a number(q to quit): ");
    // use return value to check whether number acquired correctly
    while (scanf("%d", &num) == 1)
    {
        // reset the status of isPrime at the start of each for loop
        for (div  = 2, isPrime = true; (div * div) <= num; div++)
        {
            //check modulus
            if (num%div == 0)
            {
                if (div* div==num)
                {
                    printf("%d can be divided by %d\n", num, div);
                }
                else
                {
                    printf("%d can be divided by %d and %d\n", num, div,num / div);
                }
                isPrime = false;
            }
        }
        if (isPrime)
        {
            printf("%d is prime\n", num);
        }
        printf("Enter a number(q to quit to): ");
    }
    printf("Bye\n");
    return 0;
}