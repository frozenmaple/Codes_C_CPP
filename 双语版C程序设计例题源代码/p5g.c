 /* Program example P5G
    Demonstration of the conditional operator ?: */ 
 #include <stdio.h> 
 int main() 
 { 
  float max, num1, num2 ; 
 
  printf( "Type in two numbers. Press Enter after each number.\n" );
  scanf( "%f%f", &num1, &num2 ) ; 

  /* Assign max to the larger of the two numbers. */ 
  max = ( num1 > num2 ) ? num1 : num2 ; 
  printf( "The larger number is %f\n", max ) ; 
  return 0 ;
 } 

