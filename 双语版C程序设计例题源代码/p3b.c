 /* Program example P3B
    Demonstration of increment and decrement operators. */ 
 #include <stdio.h> 
 int main() 
 { 
   /* Define two variables and initialise them. */ 
   int var1 = 1, var2 = 2 ; 
   printf( "Initial values:\n" ) ; 
   printf( "var1 is %d and var2 is %d\n", var1, var2 ) ;
   var1++ ; /* Increment the value in var1. */ 
   var2-- ; /* Decrement the value in var2. */ 
   printf( "Final values:\n" ) ; 
   printf( "var1 is %d and var2 is %d\n", var1, var2 ) ;
   return 0 ;
 } 

