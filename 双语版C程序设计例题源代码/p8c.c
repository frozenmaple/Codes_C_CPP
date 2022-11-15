 /* Program example P8C
    Demonstration of the dereference operator * */ 
 #include <stdio.h> 
 int main() 
 { 
   int  var ; 
   int *ptr ; 

   var = 1 ; 
   ptr = &var ;  /* ptr contains the address of var. */ 

   printf( "ptr contains %p\n", ptr ) ; 
   printf( "*ptr contains %d\n", *ptr) ;
  return 0 ;
 } 

