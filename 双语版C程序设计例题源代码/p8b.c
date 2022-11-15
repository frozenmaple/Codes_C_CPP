 /* Program example P8B
    Demonstration of pointer variables. */ 
 #include <stdio.h> 
 int main() 
 { 
   int var1  ; 
   char var2 ; 
   int  *ptr1 ; 
   char *ptr2 ; 

   var1 = 1 ; 
   var2 = 'A' ; 

   ptr1 = &var1 ;  /* ptr1 contains the address of var1 */ 
   ptr2 = &var2 ;  /* ptr2 contains the address of var2 */ 

   printf( "ptr1 contains %p\n", ptr1 ) ; 
   printf( "ptr2 contains %p\n", ptr2 ) ; 
   return 0 ;
 }

