/* Program example P11C
   Demonstration of a function with two parameters. */
#include <stdio.h>
#include <string.h>
void display( int num, char ch) ; /* Function declaration. */
int main() 
{ 
    char text[81] ; 
    int len ;
    
    printf ("Type a string of text and press Enter: ");
    scanf ( "%s", text) ;
    len = strlen ( text ) ;
    
    display( len, '+' ) ; /* Display the top line of +s. */
    printf( "%s\n", text ) ; 
    display( len, '-' ) ; /* Display the bottom line of -s. */
    return 0 ; 
}

/* Function : display 
 This function will display any number of any character. 
 Parameters: num is the number of times to display a character.
 ch is the character to display.                   */
void display( int num, char ch ) 
{ 
    int counter ; 
    
    for ( counter = 0 ; counter < num ; counter++ ) 
        putchar( ch ) ; 
    putchar ( '\n' ) ;
}
