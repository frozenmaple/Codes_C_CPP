 /* Program example P3A
    Introduction to the arithmetic operators in C. */
 #include <stdio.h> 
 int main() 
 { 
   /* Define the variables used in the program. */ 
   int var1, var2 ;
   /* Assign values to the variables and display
      the values in the variables. */ 
   var1 = 0 ; 
   var2 = 10 ; 
   printf( "var1 is %d and var2 is %d\n", var1, var2 ) ;
   /* Do some arithmetic with the variables and display
      the values in the variables. */ 
   var2 = var1 + 18 ; 
   printf( "var2 is now %d\n", var2 ) ; 
   var1 = var2 * 3 ; 
   printf( "var1 is now %d\n", var1 ) ; 
   var1 = var2 / 3 ; 
   printf( "var1 is now %d\n", var1 ) ; 
   var2 = var1 - 1 ; 
   printf( "var2 is now %d\n", var2 ) ; 
   var1 = var2 % 3 ; 
   printf( "var1 is now %d\n", var1 ) ; 
   var1 = var1 + 1 ;
   printf( "var1 is finally %d\n", var1 ) ; 
   var2 = var2 * 5 ; 
   printf( "and var2 is finally %d\n", var2 ) ;
   return 0 ;
 }

