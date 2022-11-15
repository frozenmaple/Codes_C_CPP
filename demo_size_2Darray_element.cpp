/*
** Demo_size_2Darray_element.cpp for sizeof 2D array, 1D array and element
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Thu Sep 22 8:55:44 AM 2022 frozenmaple
** Last update Fri Sep 22 9:06:45 AM 2022 frozenmaple
*/


#include <stdio.h>

int main()
{
    int a[3][2];

    // sizeof(a) returns the total byte numbers of 2D array (4bytes * 6elements)
    // type int has 4bytes length. And the %zd is for portability corresponds to the unsigned type size_t.
    printf("The size of 2D array is %zd\n", sizeof(a));

    // sizeof(a[0]) returns the total byte numbers of 1D array (4bytes * 2elements)
    // a[0] is the address of the first row of the 2D array.
    printf("The size of 1D array is %zd\n", sizeof(a[0]));

    // sizeof(a[0][0]) returns the byte numbers of element (4byte * 1element)
    // a[0][0] is the first element of the 2D array
    printf("The size of 1 element is %zd\n", sizeof(a[0][0]));

    return 0;
}
