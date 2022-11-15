 /* Program example P7B
    This program calculates the average age of ten people
    using an array.                                      */
 #include <stdio.h> 
 int main() 
 { 
   int ages[10] ; 
   int i ; 
   int total_age = 0 ; 
 
   printf( "Please enter the ages of ten people\n" ) ; 
   /* Input and total each age. */ 
   for ( i = 0 ; i < 10 ; i++ ) 
   { 
     scanf( "%d", &ages[i] ) ; 
     total_age += ages[i] ; 
   }

   printf( "The average of ");
   for ( i = 0 ; i < 10 ; i++ ) 
     printf( "%d ", ages[i] ) ;
   printf( "is %d\n", total_age / 10 ) ;
   return 0 ;
 } 

