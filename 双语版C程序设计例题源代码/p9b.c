 /* Program example P9B
    To demonstrate accessing the elements of an array using  
    element addresses rather than subscripts.              */ 
 #include <stdio.h> 
 #define NO_OF_ELS 5 
 int main()
 { 
   int a[NO_OF_ELS] = { 10, 13, 15, 11, 6 } ; 
   int i ; 

   for ( i = 0 ; i < NO_OF_ELS ; i++ ) 
     printf( "Element %d is %d\n", i, *(a+i) ) ;
   return 0 ;
 } 

