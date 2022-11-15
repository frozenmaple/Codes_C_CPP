 /* Program example P4B
    To input two numbers and display their sum. */
 #include <stdio.h> 
 int main()
 {
   float sum ; 
   float num1, num2 ;
   printf( "Type in 2 numbers. Press Enter after each number.\n" );
   scanf( "%f", &num1 ) ; 
   scanf( "%f", &num2 ) ; 
   sum = num1 + num2 ; 
   printf( "\n%f plus %f is %f\n", num1, num2, sum ) ;
   return 0 ;
 } 

