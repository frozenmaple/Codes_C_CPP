/* Program example P12C
   To demonstrate passing a structure variable to a function.
   Program reads and displays data for a student.            */
#include <stdio.h>

struct student_rec  /* Global structure template. */
{
    int number ;
    char surname[21] ;
    char first_name[11] ;
    int scores[5] ;
} ;

void display_student_data( struct student_rec student );
void get_student_data( struct student_rec *ptr ) ;

int main()
{
    struct student_rec student ;
    struct student_rec *student_ptr ; 
    
    student_ptr = &student ; 
    
    /* Use a pointer to a structure variable as an argument. */
    get_student_data( student_ptr ) ;
    
    /* Use a structure variable as an argument. */
    display_student_data( student ) ;
    return 0 ;
}

/* Function :  display_student_data()
   Purpose  :  This function displays student data.
   Parameter:  The student data.                   */
void display_student_data( struct student_rec student )
{
    int i;
    printf( "\nThe data in the student structure is:" ) ;
    printf( "\nNumber is %d", student.number ) ;
    printf( "\nSurname is %s", student.surname ) ;
    printf( "\nFirst name is %s", student.first_name ) ;
    printf( "\nScores are: " ) ;
    for ( i= 0 ; i < 5 ; i++ )
        printf( " %d ", student.scores[i] ) ;
    printf( "\n" ) ;
}

/* Function : get_student_data()
   Purpose  : This function reads student data.
   Parameter: A pointer to the student data structure. */
void get_student_data( struct student_rec *ptr )
{
    int i ;
    printf( "Number: " ) ;
    scanf( "%d", &(ptr->number) ) ;
    printf( "Surname: " ) ;
    scanf( "%20s", ptr->surname ) ;
    printf( "First name: " ) ;
    scanf( "%10s", ptr->first_name ) ;
    printf( "Five test scores: " ) ;
    for ( i= 0 ; i < 5 ; i++ )
        scanf( "%d", &(ptr->scores[i]) ) ;
} 
