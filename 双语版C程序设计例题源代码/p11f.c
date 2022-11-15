/* Program example P11F
   To demonstrate passing an argument by reference to a function. */ 
#include <stdio.h>
void any_function( int *p ) ; 
int main() 
{ 
    int a = 1 ; 
    
    printf( "a is %d", a ) ; 
    /* Pass the address of a to the function. */ 
    any_function( &a ) ; 
    printf( "\na is now changed to %d\n", a ) ;
    return 0 ;
} 

void any_function( int *p ) 
{ 
    printf( "\nThe value passed to the parameter is %d", *p ) ; 
    *p = 2 ; /* Change the value of the argument. */ 
    printf( "\nThe value of the argument is now %d", *p ) ; 
} 
