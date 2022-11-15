/* Program example P11B
   Demonstration of calling a function with an argument. */
#include <stdio.h>
#include <string.h>
void stars( int ) ; /* The declaration of the function. */ 
int main() 
{ 
    char text[81] ; 
    int len ;
    
    printf ("Type a string of text and press Enter: ");
    scanf ( "%s", text) ;
    len = strlen ( text ) ;
    stars( len ) ; /* Call the function to dislay the top line.    */  
    printf( "%s\n", text ) ; 
    stars( len ) ; /* Call the function again for the bottom line. */
    return 0 ;
} 

void stars( int num ) 
{ 
    int counter ;
    
    for ( counter = 0 ; counter < num ; counter++ ) 
        putchar( '*' ) ; 
    putchar ( '\n' ) ;
}
