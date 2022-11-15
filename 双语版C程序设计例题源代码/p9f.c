/* Program example P9F
 To demonstrate dynamic memory allocation of a
 two-dimensional array using malloc().        */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int no_rows, no_columns, i, j ;
    int **a ; /* a is the name of the array. */ 
    
    /* Get the number of rows and columns in the array. */
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", & no_rows ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", & no_columns ) ;
    
    /* Allocate memory for each element of a.
     Each element of a is a pointer to an array of integers. */
    a = ( int ** ) malloc( no_rows * sizeof(int *) ) ;
    
    /* Allocate memory for each array (row) in a. */
    for( i = 0 ; i < no_rows ; i++ )
    {
        a[i] = ( int * ) malloc( no_columns * sizeof(int) ) ;
        if ( a[i]== NULL )
        {
            printf( "Cannot allocate memory\n" ) ;
            return EXIT_FAILURE ;
        }
    }
    
    /* Enter a value for each element of the array, row by row. */
    for ( i = 0 ; i < no_rows ; i++ )
    {
        for ( j=0 ; j < no_columns; j++ )
        {
            printf( "Enter element [%d,%d]: ", i, j ) ;
            scanf( "%d", &a[i][j] ) ;
        }
    }
    
    /* Display the element values just entered. */
    printf( "\nThe values in the array are:\n" ) ;
    for ( i = 0 ; i < no_rows; i++ )
    {
        for ( j = 0 ; j < no_columns ; j++ )
        {
            printf( "Element [%d,%d] is %d\n", i, j, a[i][j] ) ;
        }
    }
    
    for( i = 0 ; i < no_rows ; i++ )
        free( a[i] ) ;
    free( a ) ;
    return 0 ;
}
