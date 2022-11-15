 /* Program example P8A
    To display the addresses of two variables. */ 
 #include <stdio.h> 
 int main() 
 { 
   int var1  ; 
   char var2 ;
 
   var1 = 1 ; 
   var2 = 'A' ;
 
   printf( "var1 has a value of %d and is stored at %p\n",
            var1, &var1 ) ; 
   printf( "var2 has a value of %c and is stored at %p\n",
            var2, &var2 ) ;
  return 0 ; 
 } 

