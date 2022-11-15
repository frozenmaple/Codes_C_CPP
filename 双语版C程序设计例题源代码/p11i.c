/* Program example P11I
   To demonstrate passing a two-dimensional array to a function. */ 
#include <stdio.h>
int sum_array( int array[][2], int no_of_rows ) ;
int main()
{ 
    int values[5][2] = { { 31, 14 }, 
                       { 51, 11 }, 
                       {  7, 10 }, 
                       { 13, 41 }, 
                       { 16, 18 } } ; 
    int sum ; 
    
    sum = sum_array( values, 5 ) ; 
    printf( "The sum of the elements in the array is %d\n", sum ) ;
    return 0 ; 
} 

/* Function   : sum_array 
   Purpose    : Sums the elements of a 2-dimensional integer array.
   Parameters : An array name and the number of elements in the array.
   Returns    : The sum of the array elements.                  */ 
int sum_array( int array[][2], int no_of_rows ) 
{ 
    int row, column ; 
    int sum = 0 ; 
    
    for ( row = 0 ; row < no_of_rows ; row++ ) 
    { 
        for ( column = 0 ; column < 2 ; column++ ) 
            sum += array[row][column] ; 
    } 
    return sum ; 
}
