 /* Program example P9E
    To demonstration dynamic memory allocation using realloc(). */
 #include <stdio.h> 
 #include <stdlib.h> 
 int main() 
 { 
   char reply ; 
   int no_els = 0, i, el_size ; 
   float *float_array ; 

   el_size = sizeof( float ) ; /* Store the size of one element. */ 
   /* Start the array with a memory allocation for one element.  */ 
   float_array = (float *) malloc( el_size ) ; 
   if ( float_array == NULL ) 
     printf( "Cannot allocate any memory" ) ; 
   else 
   { 
     do 
     { 
       printf( "\nEnter a numeric value: " ) ; 
       scanf( "%f", float_array+no_els ) ; 
       no_els++ ; 
       printf( "Any more values? (y or n) " ) ; 
       scanf( "%1s", &reply ) ; 
       if ( reply == 'Y' || reply == 'y' )                        
       {                                                          
         /* Enlarge the array by the size of one element. */         
         float_array = 
               (float *) realloc( float_array,el_size*(no_els+1) ) ; 
         if ( float_array == NULL ) 
            printf( "Cannot allocate any more memory\n" ) ; 
       } 
     } 
     while ( reply == 'Y' || reply == 'y' ) ; 

     /* Display the values just entered. */                        
     for ( i=0; i<no_els; i++ )                                   
       printf( "\nElement %d is %f\n", i, float_array[i] ) ;

     free( float_array ) ; /* Free the allocated memory. */     
   } 
   return 0 ;
 } 

