 /* Program example P13H
    Demonstration of block I-O routines fread() and fwrite().
    Program writes an array of ten integers to a file and 
    reads them back again.                                 */ 
 #include <stdio.h>
 #include <stdlib.h> 
 #define SIZE 10 
 int main() 
 { 
   FILE *fp ; 
   int count, i ; 
   int array[SIZE] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 } ;

   /* Open the output file. */ 
   if ( (fp = fopen("array.dat", "wb")) == NULL ) 
   { 
     puts( "Error on opening output file array.dat" ) ; 
     return EXIT_FAILURE ; 
   } 

   /* Write the array to the file. */ 
   count = fwrite( array, sizeof(int), SIZE, fp ) ; 
   
   if ( count != SIZE ) 
   { 
     puts( "Error on writing array.dat" ) ; 
     return EXIT_FAILURE ; 
   } 
   fclose( fp ) ; 

   /* Open the file for input. */ 
   if ( (fp = fopen("array.dat", "rb")) == NULL ) 
   { 
     puts( "Error on opening input file array.dat" ) ; 
     return EXIT_FAILURE ; 
   } 
   
   /* Read the array from the file. */ 
   count = fread( array, sizeof(int), SIZE, fp ) ; 
   if ( count != SIZE ) 
   { 
     puts( "Error on reading array.dat" ) ; 
     return EXIT_FAILURE ; 
   } 
   fclose( fp ) ; 

   puts( "The array values are :" ) ; 
   for ( i = 0 ; i < SIZE ; i++) 
     printf( "%d ", array [i] ) ;
   putchar ( '\n' ) ;
   return 0 ;
 } 

