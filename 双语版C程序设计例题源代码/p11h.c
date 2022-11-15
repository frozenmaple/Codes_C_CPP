/* Program example P11H
   To demonstrate passing a one-dimensional array to a function. */
#include <stdio.h>
int sum_array( int array[], int no_of_elements ) ;

int main() 
{ 
    int values[10] = { 12, 4, 5, 3, 4, 0, 1, 8, 2, 3 } ; 
    int sum ; 
    
    sum = sum_array( values, 10 ) ; 
    printf( "The sum of the elements in the array is %d\n", sum ) ;
    return 0 ;
} 

/* Function : sum_array 
   Purpose    : To sum the elements of a one- dimensional integer array.
   Parameters : An array and the number of elements in the array.
   Returns    : The sum of the array elements.                        */
int sum_array( int array[], int num_of_elements )
{ 
    int i, sum = 0 ;
    
    for ( i = 0 ; i < num_of_elements ; i++ ) 
        sum += array[i] ; 
    return ( sum ) ; 
}
