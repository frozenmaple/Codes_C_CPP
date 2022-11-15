 /* Program example P2C
    Introduction to variables in C. */
 #include <stdio.h> 
 int main()
 {
   int v1 ;    /*  v1 is an integer variable.       */ 
   float v2 ;  /*  v2 is a floating-point variable. */ 
   char v3 ;   /*  v3 is a character variable.      */ 
   /* Now assign some values to the variables. */ 
   v1 = 65 ; 
   v2 = -18.23 ; 
   v3 = 'a' ; 
   /* Finally display the variable values on the screen. */
   printf( "v1 has the value %d\n", v1 ) ; 
   printf( "v2 has the value %f\n", v2 ) ; 
   printf( "v3 has the value %c\n", v3 ) ; 
   printf( "End of program\n" ) ;
   return 0 ;
 } 

