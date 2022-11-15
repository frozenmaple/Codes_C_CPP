 /* Program example P10D
    To demonstrate the use of subscripts in accessing each
    individual character of a string.                            */
 #include <stdio.h> 
 int main() 
 { 
   char greetings[6] = "Hello" ; 
   int i ; 
 
   /* Display each of the characters of greetings on a new line. */
   for ( i = 0 ; i < 5 ; i++ ) 
   { 
     printf( "%c\n", greetings[i] ) ; 
   }
  return 0 ;
 } 

