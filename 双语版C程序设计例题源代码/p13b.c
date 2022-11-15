 /* Program example P13B
    Opening and closing a file in a C program.  */ 
 #include <stdio.h> 
 int main() 
 { 
   FILE *fp ;  /* fp is a pointer to a file.    */ 

   /* Open the file named file.txt for reading. */ 
   if ( (fp = fopen("file.txt", "r")) == NULL ) 
     puts( "Error in opening file.txt" ) ; 
   else 
   { 
     puts( "file.txt is successfully opened" ) ; 
     fclose( fp ) ; 
   }
   return 0 ;
 } 

