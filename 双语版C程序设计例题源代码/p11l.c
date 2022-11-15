 /* Program example P11L
    Demonstration of command line arguments. */
 #include <stdio.h> 
 int main( int argc, char *argv[] ) 
 /* argc is the number of arguments. 
    argv is an array of pointers to the arguments. */
 { 
   int i ; 

   printf( "The number of arguments passed is %d\n\n", argc ) ;
   printf( "The arguments passed are:\n\n" ) ; 
   for ( i = 1 ; i < argc ; i++ ) 
     printf( "Argument %d is %s\n\n", i, argv[i] ) ; 
  return 0 ;
 } 

