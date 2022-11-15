/* Program example P13D
 This program copies a file character by character using 
 fgetc() and fputc().                               */ 
#include <stdio.h>
int main() 
{ 
    FILE *fp_in, *fp_out ; 
    char char_in ;
    
    if ( (fp_in=fopen("file.txt", "r")) == NULL )
    { 
        puts( "Error in opening file.txt" ) ; 
    }
    else if ( (fp_out = fopen("new.txt", "w") )!= NULL ) 
    { 
        /* Proceed with the copy. */ 
        while ( (char_in = fgetc(fp_in)) != EOF )
        {
            fputc( char_in, fp_out ) ;
        }
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
