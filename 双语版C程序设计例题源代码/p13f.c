 /* Program example P13F
    This program reads and writes one line at a time using 
    fgets() and fputs(), assuming a line is not more than 
    80 characters long.                                  */
 #include <stdio.h> 
 #define MAX_CHARACTERS 81 
 int main() 
 { 
   char one_line[ MAX_CHARACTERS ] ; 
   FILE *fp_in, *fp_out ; 
 
   if ( (fp_in = fopen("file.txt", "r") ) == NULL ) 
     puts( "Error in opening file.txt" ) ; 
   else if ( (fp_out = fopen("new.txt", "w") ) != NULL ) 
   { 
     /* Proceed with the copy. */ 
     while( fgets(one_line, MAX_CHARACTERS, fp_in) != NULL ) 
       fputs( one_line, fp_out ) ; 
     fclose( fp_in ) ; 
     fclose( fp_out ) ; 
     puts( "Copying completed" ) ; 
   } 
   else
   {
     puts( "Error in opening new.txt" ) ;
   }
   return 0 ;
 } 

