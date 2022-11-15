 /* Program example P9A
    This program shows that the name of an array is the same 
    as the address of its first element.                     */
 #include <stdio.h> 
 #define NO_OF_ELS 5 
 int main() 
 { 
   int a[NO_OF_ELS] ; 

   printf( "a is %p and &a[0] is %p\n", a, &a[0] ) ; 
   return 0 ;
 } 

