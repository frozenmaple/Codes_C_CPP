/* Program example P12B
 Demonstration of structure initialisation and 
 structure pointers.                         */ 
#include <stdio.h>
int main() 
{ 
    struct student_rec    /* structure template. */ 
    { 
        int number ; 
        char surname[21] ; 
        char first_name[11] ; 
        int scores[5] ; 
    } ; 
    
    /* Define a structure variable and initialise it with  
     some values. */
    struct student_rec student = { 
        1234, 
        "Li", 
        "PeiQi",
        { 50, 60, 45, 65, 75 } 
    } ; 
    struct student_rec *ptr ; 
    int i ; 
    
    ptr = &student ; /* ptr points to student. */
    
    /* Display the values in the members of student
     using a pointer. */
    printf( "The values in student are:" ) ; 
    printf( "\nNumber is %d", ptr  -> number ) ; 
    printf( "\nSurname is %s", ptr -> surname ) ; 
    printf( "\nFirst name is %s", ptr  -> first_name ) ; 
    printf( "\nScores are: " ) ; 
    for ( i= 0 ; i < 5 ; i++ ) 
      printf( " %d ", ptr -> scores[i] ) ; 
    printf( "\n" ) ; 
    return 0 ;
} 
