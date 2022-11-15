/* Program example P13E
 This program reads one line at a time from a file.
 It assumes that no line is more than 80 characters long. */
#include <stdio.h>
#define MAX_CHARACTERS 81
int main()
{ 
    FILE* fp_in ; 
    char one_line[ MAX_CHARACTERS ] ;/* Array used to store line. */
    
    /* Open the file for reading */ 
    if ( (fp_in=fopen("file.txt", "r") ) == NULL )
    { 
        puts( "Error in opening file.txt" ) ;
    }
    else     
    { 
        /* Read at most MAX_CHARACTERS-1 characters from the file 
         or until a new line character (\n) is read
         or the end of file occurs. */ 
        while( fgets( one_line, MAX_CHARACTERS, fp_in )!=NULL )  
            printf( "%s", one_line ) ; 
        fclose( fp_in ) ;
    }
    return 0 ;
} 
