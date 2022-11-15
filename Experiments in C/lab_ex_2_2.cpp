/*
** lab_ex_2_2.c for geometric calculator in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 上午10:50:51 2019 frozenmaple
** Last update Fri Oct 11 上午10:50:51 2019 frozenmaple
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int h;
    float r;
    float area_sphere, volume_cylinder;
    printf("please input the height:\n");
    scanf("%d", &h);
    printf("please input the radius:\n");
    scanf("%f", &r);

    //M_PI is a macro defined in math.h
    area_sphere = 4 * M_PI * pow(r, 2);
    volume_cylinder = M_PI * pow(r, 2) * h;

    //the result take only two decimal places
    printf("The area of sphere is %.2f\n", area_sphere);
    printf("The volume of cylinder is %.2f\n", volume_cylinder);

    return 0;
}