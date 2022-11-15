 /* Program example P3C
    Demonstration of prefix and postfix ++ operators. */ 
 #include <stdio.h> 
 int main() 
 { 
   int var1 = 11, var2 = 22, var3, var4 ;

   var3 = ++var1;  /* prefix : var1 is 12, var3 is 12  */
   var4 = var2++ ; /* postfix: var4 is 22, var2 is 23  */ 
   printf( "var1 is %d, var3 is %d\n", var1, var3 ) ;
   printf( "var4 is %d, var2 is %d\n", var4, var2 ) ;
   return 0 ;
 }

