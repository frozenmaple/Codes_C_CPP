 /* Program example P4E 
    To demonstrate getchar() and putchar(). */
 #include <stdio.h> 
 int main() 
 { 
   char ch; 
 
   printf( "Press a key and then press Enter " ) ; 
   ch = getchar() ; 
   printf( "\nYou pressed " ) ; 
   putchar( ch ) ;    /* Display the character and */
   putchar ( '\n' ) ; /* skip to a new line.       */
   return 0 ;
 } 

