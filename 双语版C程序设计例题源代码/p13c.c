 /* Program example P13C
    Demonstration of the function fgetc() by reading 
    the contents of a file character by character.  */
 #include <stdio.h> 
 int main() 
 { 
   FILE *fp ; 
   char char_in ; 
 
   if ( (fp = fopen("d:\\file2.txt", "r")) == NULL ) 
     puts( "Error in opening file.txt" ) ; 
   else 
   { 
     while( (char_in = fgetc(fp)) != EOF ) 
       putchar( char_in ) ; 
     fclose( fp ) ; 
   }
   return 0 ;
 } 

