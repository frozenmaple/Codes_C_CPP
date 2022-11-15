/* Program example P13K
   To further demonstrate fseek() and fread().
   This program reads a supplier code and displays the
   corresponding supplier record.                     */ 
#include <stdio.h>
#include <stdlib.h>
FILE *open_file( const char *file, const char *mode ) ; 
int get_input_code( void ) ;
void display_supplier( unsigned int supp_code, FILE *fp ) ;
#define MAX_RECS 20 
int main()
{
    FILE *fp ; 
    int in_code ; 
    
    /* Open the supplier file. */ 
    fp = open_file( "supplier.dat", "rb" ) ; 
    
    /* Display supplier data for each code entered. Stop when
     the suppllier code entered is less then or equal to 0.   */
    do 
    { 
        in_code = get_input_code() ; /* Get the supplier code.     */
        /* If the code is in range, display the supplier data.     */
        if ( in_code >0 && in_code <= MAX_RECS )
            display_supplier( in_code, fp ) ;
    }  while ( in_code > 0 ) ; /* Loop ends when code is not > 0.  */
    fclose( fp ) ;
    
    return 0 ; 
} 

/* Function  : display_supplier() 
   Purpose   : This function displays the supplier record. 
   Parameters: Supplier code and file pointer. 
   Returns   : void.                                          */ 
void display_supplier( const unsigned int supp_code, FILE *fp ) 
{ 
    struct supplier_rec 
    { 
        int code ; 
        char name[31] ; 
        float balance ; 
    } ; 
    struct supplier_rec supp ; 
    int offset ;
    
    offset = ( supp_code - 1 ) * sizeof( struct supplier_rec ) ;
    fseek( fp, offset, 0 ) ;
    
    if ( (fread( &supp,sizeof(struct supplier_rec),1,fp )) != 1 ) 
        printf( "\nError in reading file" ) ; 
    else 
        printf( "\nCode: %d\nName: %s\nBalance :%7.2f\n", 
               supp.code, supp.name, supp.balance ) ; 
} 

/* Function  : get_input_code() 
   Purpose   : Gets the supplier code from the keyboard. 
   Parameters: None. 
   Returns   : Supplier code.                                 */ 
int get_input_code( void ) 
{ 
    int supp_code ; 
    
    printf( "\nEnter a supplier code from 1 to %d or 0 to end ", 
           MAX_RECS ) ; 
    scanf( "%d", &supp_code ) ; 
    return ( supp_code ) ; 
} 

/* Function  : open_file() 
   Purpose   : Opens a file in the required mode. 
   Parameters: Filename and mode. 
   Returns   : File pointer.                                  */ 
FILE * open_file( const char *file, const char *mode ) 
{ 
    FILE *fp ; 
    
    if ( (fp=fopen(file, mode)) == NULL ) 
    { 
        printf( "\n\nUnable to open file %s with %s\n",file,mode ) ;
        exit( EXIT_FAILURE ) ;
    } 
    return ( fp ) ; 
}
