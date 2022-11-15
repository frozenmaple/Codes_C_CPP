 /* Program example P10F
    To demonstrate an array of strings. */
 #include <stdio.h> 
 int main() 
 { 
   /* Define an array of strings. */ 
   char *months[12] = { "January", "February", "March",
                        "April", "May", "June", "July",
                        "August", "September", "October",
                        "November", "December" } ;
    int i ; 
 
    /* Display the months of the year. */ 
    printf( "The months of the year are:\n" ) ; 
    for ( i = 0 ; i < 12 ; i++ ) 
      printf( "%s\n", months[i] ) ; 
    return 0 ;
 } 

