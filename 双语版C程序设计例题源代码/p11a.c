/* Program example P11A
   To demonstrate the use of functions by displaying 
   a string of text eclosed within two lines of stars.    */ 
#include <stdio.h>
void stars( void ) ;  /* The declaration of the function. */ 
int main() 
{ 
    char text[9] = "some text" ; 
  	
    stars() ; /* Call the function to display the top line.   */ 
    printf( "%s\n", text ) ; 
    stars() ; /* Call the function again for the bottom line. */
    return 0 ;
} /* This is the end of the main function. */ 

/* The function definition. */ 
void stars(void) 
{ 
    int counter ; 
    
    for ( counter = 0 ; counter < 9 ; counter++ ) 
        putchar( '*' ) ;
    putchar ( '\n' ) ;
} /* This is the end of the stars function. */
