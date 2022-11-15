/*
** lab_ex_5_2.c for C Codes in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午2:28:46 2019 frozenmaple
** Last update Fri Oct 11 下午2:28:46 2019 frozenmaple
*/


/*
给定如下的数组：
float litres[] = { 11.5, 11.21, 12.7, 12.6, 12.4 } ;
float miles[] = { 471.5, 358.72, 495.3, 453.6, 421.6 } ;
int mpl[5] ;  // Miles per litre. 
写一个程序计算并显示mpl中每个元素的值。使用指针而不是下标访问数组元素。
*/
#include <stdio.h>

int main(void)
{
    float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[5]; // Miles per litre.
    int *p;
    float *pl, *pm;

    pl = litres;
    pm = miles;
    for (p = mpl; p < mpl + (sizeof(mpl) / sizeof(int)); p++)
    {
        *p = (int)(*pm / *pl);
        printf("%d\t", *p);
        pm++;
        pl++;
    }
    printf("\n");

    return 0;
}