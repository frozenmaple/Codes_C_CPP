/* Program example P11E
   To demonstrate passing an argument by value to a function. */
#include <stdio.h>
void any_function( int a ) ; 
int main() 
{ 
    int a = 1 ; 
    
    printf( "a is %d", a ) ; 
    /* Pass a copy of the value of a to the function. */ 
    any_function( a ) ; 
    printf( "\na is still %d\n", a ) ; 
    return 0 ;
} 

void any_function( int v )   
{ 
    printf( "\nThe value passed to the parameter is %d", v ) ; 
    v = 2 ; /* Change the value of the parameter. */ 
    printf( "\nThe value of the parameter  is now %d", v ) ; 
} 
