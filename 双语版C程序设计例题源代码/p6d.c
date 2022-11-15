 /* Program example P6D
    This program displays a table of squares and cubes. */
 #include <stdio.h> 
 int main() 
 { 
   int num, i ; 
 
   printf( "Please enter a number " ) ; 
   scanf( "%d", &num ) ;

   printf( "Number   Square   Cube\n" ) ; 
   printf( "-----------------------\n" ) ; 
   for ( i = 1 ; i <= num ; i++  ) 
   { 
     printf( "%4d    %4d    %4d\n", i, i*i, i*i*i ) ; 
   }
  return 0 ;
 } 

