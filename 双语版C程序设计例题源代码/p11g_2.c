/* Program example P11G
   This program passes two arguments by reference to a function. */
#include <stdio.h>
void swap( float ptr1, float ptr2 ) ; 
int main() 
{ 
    float num1, num2 ; 
    
    printf( "Please enter two numbers: " ) ; 
    scanf( "%f", &num1 ) ; 
    scanf( "%f", &num2 ) ; 
    
    if ( num1 > num2 ) 
        swap( num1, num2 ) ; /* Swap the two values around. */
    printf( "The numbers in order are %.1f  %.1f\n", num1, num2 ) ;
    return 0 ;
} 

/* Function   : swap 
   Purpose    : This function swaps two floating-point values. 
   Parameters : pointers to the variables to be swapped. */
void swap( float ptr1, float ptr2 ) 
{ 
    float temp ; 
    printf( "The numbers in order are %.1f  %.1f\n", ptr1, ptr2 ) ;
    temp = ptr1 ; 
    ptr1 = ptr2 ; 
    ptr2 = temp ; 
    printf( "The numbers in order are %.1f  %.1f\n", ptr1, ptr2 ) ;
} 
