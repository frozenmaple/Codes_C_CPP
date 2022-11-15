/* Program example P13J
 Demonstration of random access using fseek(). */
#include <stdio.h>
#include <stdlib.h>
int main() 
{ 
    FILE *fp ; 
    int file_pos, offset ; 
    int fseek_ret_value ; 
    char in_char ; 
    
    if ( (fp = fopen("file.txt", "r") ) == NULL )
    { 
        printf( "Cannot open file.txt" ) ; 
        return EXIT_FAILURE ;
    }
    
    printf( "\n\nDisplay the ASCII value of any character in "
           "file.txt\n\n" ) ; 
    do 
    { 
        printf( "Enter the file position or 0 to end: ") ; 
        scanf( "%d", &file_pos ) ;
        
        if ( file_pos > 0 ) 
        { 
            /* First byte if offset 0, so reduce file_pos by 1. */ 
            offset = file_pos - 1 ; 
            fseek_ret_value = fseek( fp, offset, SEEK_SET ) ; 
            if ( fseek_ret_value == 0 ) 
            { 
                in_char = fgetc( fp ) ; 
                printf( "ASCII value at position %d is %d. ", 
                       file_pos, in_char ) ;
                if ( in_char == ' ' )
                    printf( "This is the space character.\n" ) ;
                else
                    printf( "This is the character %c\n", in_char ) ;
            } 
            else 
                printf( "Invalid value\n" ) ; 
        } 
    } while ( file_pos > 0 ) ;
    
    fclose( fp ) ;
    return 0 ;
}

