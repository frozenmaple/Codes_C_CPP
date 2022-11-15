/* Program example P11D
   To demonstrate the use of the return statement in a function. */
#include <stdio.h> 
int minimum(int num1, int num2, int num3);/*Function declaration.*/
int main() 
{ 
    int val1, val2, val3, min_val ; 
    
    /* Read in three integer values from the keyboard. */ 
    printf( "Please enter three integers: " ) ; 
    scanf( "%d %d %d", &val1, &val2, &val3 ) ; 
    
    /* Find the minimum of these three values. */ 
    min_val = minimum( val1, val2, val3 ) ;
    printf( "The minimum of %d, %d and %d is %d\n",
           val1, val2, val3, min_val ) ;
    return 0 ;
}

/* Function  : minimum 
 This function will return the minimum of three integers values.
 Parameters : three integer values num1, num2 and num3. 
 Returns    : the minimum of num1, num2 and num2.            */ 
int minimum( int num1, int num2, int num3 ) 
{ 
    int min = num1 ; /* Assume the first number is the minimum. */
    if ( num2 < min ) 
        min = num2 ;   /* The second number is the new minimum.   */
    if ( num3 < min )
        min = num3 ;   /* The third number is the new minimum.    */
    return min ;
}
