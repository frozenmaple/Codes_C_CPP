 /* Program example P6E
    This program displays a 12 by 12 multiplication table 
    using a nested loop.                                 */ 
 #include <stdio.h> 
 int main() 
 { 
   int i, j ; 
 
   printf( "    " ) ; 
   for ( i = 1 ; i <= 12 ; i++ ) 
   { 
     printf( "%5d", i ) ; 
   } 
   printf( "\n   +" ) ; 
   for ( i = 0 ; i <= 60 ; i++ ) 
   { 
     printf( "-" ) ; 
   } 
   for ( i= 1 ; i <= 12 ; i++ )   /* Start of outer loop   <--+ */ 
   {                              /*                          | */ 
     printf( "\n%2d |", i ) ;     /*                          | */ 
     for( j = 1 ; j <= 12 ; j++ ) /* Start of inner loop <-+  | */ 
     {                            /*                       |  | */ 
       printf( "%5d", i*j ) ;     /*                       |  | */ 
     }                            /* End of inner loop  <--+  | */ 
   }                              /* End of outer loop     <--+ */ 
  printf( "\n" ) ;
  return 0 ;
 } 

