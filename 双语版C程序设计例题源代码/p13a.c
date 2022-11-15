 /* Program example P13A
    Demonstration of opening and closing a file. */
 #include <stdio.h> 
 int main() 
 { 
   FILE *fp ;     /* fp is a pointer to a file. */

   /* Open the file named file.txt for reading. */ 
   fp = fopen( "file.txt", "r" ) ; 
   /* If unable to open the file    fp is NULL. */ 
   if ( fp == NULL ) 
     puts( "Error in opening file.txt" ) ; 
   else 
   { 
     puts( "file.txt is successfully opened" ) ; 
     fclose( fp ) ; 
   } 
    return 0 ;
 } 

