/* Program example P12D
 This program maintains a database of employee records
 in memory.
 Written by   : Paul Kelly and Su Xiaohong.
 Date         : 27/04/2012.
 */

#include <stdio.h>

struct date
{
    int day ;
    int month ;
    int year ;
} ;
typedef struct date DATE ;
struct personnel  /* Employee details. */
{
    unsigned int number ;
    char surname[21] ;
    char first_name[11] ;
    DATE dob ;
    int dept ;
    DATE joined ;
} ;
typedef struct personnel EMPLOYEE ;

void add_an_employee( EMPLOYEE person_array[] ) ;
void delete_an_employee( EMPLOYEE person_array[] ) ;
void display_an_employee( const EMPLOYEE person_array[] ) ;
void display_all_employees( const EMPLOYEE person_array[] ) ;
void display_employee_details( const EMPLOYEE *ptr ) ;
void explanation( void ) ;
void initialise_database( EMPLOYEE person_array[] ) ;
int menu( void ) ;
int search_database( const EMPLOYEE person_array[],
                    const unsigned int emp_no ) ;

#define MAX_PERSONS 100

int main()
{
    int menu_choice ;
    EMPLOYEE persons[MAX_PERSONS] ; /* The database. */
    
    explanation() ; /* Explain the purpose of the program.  */
    
    initialise_database( persons ) ; /* Clear the database. */
    
    do
    {
        menu_choice = menu() ; /* Get the user's choice */
        switch ( menu_choice ) /* and act on it.        */
        {
            case 1 :
                add_an_employee( persons ) ;
                break ;
            case 2 :
                delete_an_employee( persons ) ;
                break ;
            case 3 :
                display_an_employee( persons ) ;
                break ;
            case 4 :
                display_all_employees( persons ) ;
        }
    } while ( menu_choice != 0) ;
    return 0 ;
}

/* Function : add_an_employee()
 Purpose  : Add an employee's data to the database.
 Parameter: A pointer to the employee array.            */

void add_an_employee( EMPLOYEE person_array[] )
{
    int i = 0  ;
    
    /* Search the array for an empty position.
     An empty position has a 0 for the employee number.   */
    while ( person_array[i].number != 0 && i < MAX_PERSONS )
        i++ ;
    if ( i == MAX_PERSONS )
        printf( "\nSorry, the database is full.\n" ) ;
    else       /* Add the person's details to the database. */
    {
        printf( "\n\nEmployee number (must be greater than 0): " ) ;
        do
        {
            scanf( "%5d", &person_array[i].number ) ;
        } while ( person_array[i].number <= 0 ) ;
        
        printf( "\n         Surname (maximum 25 characters): " ) ;
        scanf( "%20s", person_array[i].surname ) ;
        printf( "\n      First name (maximum 10 characters): " ) ;
        scanf( "%10s", person_array[i].first_name ) ;
        printf( "\nDate of birth\n" ) ;
        printf( "     Day (1 or 2 digits): " ) ;
        scanf( "%2d", &person_array[i].dob.day ) ;
        printf( "   Month (1 or 2 digits): " ) ;
        scanf( "%2d", &person_array[i].dob.month ) ;
        printf( "    Year (1 or 2 digits): " ) ;
        scanf( "%2d", &person_array[i].dob.year ) ;
        printf( "\nDepartment code (1 to 4 digits): " ) ;
        scanf( "%4d", &person_array[i].dept ) ;
        printf( "\nDate joined\n" ) ;
        printf( "     Day (1 or 2 digits): " ) ;
        scanf( "%2d", &person_array[i].joined.day ) ;
        printf( "   Month (1 or 2 digits): " ) ;
        scanf( "%2d", &person_array[i].joined.month ) ;
        printf( "    Year (1 or 2 digits): " ) ;
        scanf( "%2d", &person_array[i].joined.year ) ;
    }
}

/* Function : delete_an_employee()
 Purpose  : Delete an employee from the database.
 Parameter: A pointer to the employee array.           */

void delete_an_employee( EMPLOYEE person_array[] )
{
    unsigned int emp_no ;
    int pos ;
    
    /* An employee is marked as 'deleted' from the database
     by placing a 0 in the employee number.              */
    /* First get the employee number. */
    printf("Employee number to delete (must be greater than 0): ");
    do
    {
        scanf( "%5d", &emp_no ) ;
    } while ( emp_no <= 0 ) ;
    
    /* Find the position of this employee in the database. */
    pos = search_database( person_array, emp_no ) ;
    /* Have you come to the end of the database without finding
     the employee number? */
    if ( pos == MAX_PERSONS )  /* yes */
        printf( "This employee is not in the database.\n" ) ;
    else                      /* no  */
    {
        printf( "Employee %5d deleted.", emp_no ) ;
        person_array[pos].number = 0 ;
    }
}

/* Function : display_all_employees()
 Purpose  : Display all employee's details in the database.
 Parameter: A pointer to the employee array.             */

void display_all_employees( const EMPLOYEE person_array[] )
{
    int i ;
    
    for ( i = 0 ; i < MAX_PERSONS ; i++ )
        if ( person_array[i].number != 0 ) 
            display_employee_details( &person_array[i] ) ;
}

/* Function : display_an_employee()
 Purpose  : Display an employee's details in the database.
 Parameter: A pointer to the employee array.             */

void display_an_employee( const EMPLOYEE person_array[] )
{
    unsigned int emp_no ;
    int pos ;
    
    /* Get the employee number. */
    printf("Employee number to display (must be greater than 0):" );
    do
    {
        scanf( "%5d", &emp_no ) ;
    }  while ( emp_no <= 0 ) ;
    
    /* Find the position of this employee in the database. */
    pos = search_database( person_array, emp_no ) ;
    /* Does the employee exist? */
    if ( pos == MAX_PERSONS )  /* no */
        printf( "This employee is not in the database.\n" ) ;
    else                      /* yes - display the details. */
        display_employee_details( &person_array[pos] ) ;
}
/* Function : display_employee_details()
 Purpose  : Display employee details.
 Parameter: A pointer to the employee details.          */

void display_employee_details( const EMPLOYEE *ptr )
{
    printf( "\n\nEmployee number: %d\n", ptr->number ) ;
    printf( "        Surname: %s\n", ptr->surname) ;
    printf( "     First name: %s\n", ptr->first_name ) ;
    printf( "  Date of birth: %2d/%2d/%2d\n",
           ptr->dob.day, ptr->dob.month, ptr->dob.year ) ;
    printf( "     Department: %d\n", ptr->dept) ;
    printf( "    Date joined: %2d/%2d/%2d\n",
           ptr->joined.day, ptr->joined.month, ptr->joined.year ) ;
}

/* Function : explanation()
 Purpose  : Explain the purpose and operation of program.
 Parameters: None.                                        */

void explanation()
{
    int i ;
    
    for ( i = 0 ; i < 24 ; i++ ) /* Clear the screen. */
        printf( "\n" ) ;
    
    printf( "This program allows you to store and retrieve data "
           "on up to %d employees.\n\n"
           "The data is held in memory and is therefore lost"
           "when the program terminates.\n\n",  MAX_PERSONS ) ;
}

/* Function : initialise_database()
 Purpose  : Initialise all employee numbers to 0.
 An employee number of 0 is used to denote
 an empty position in the array.
 Parameter: A pointer to the employee array.              */

void initialise_database( EMPLOYEE person_array[] )
{
    int i ;
    
    for ( i = 0 ; i < MAX_PERSONS ; i++ )
        person_array[i].number = 0 ;
}

/* Function : menu()
 Purpose  : Display a menu of options and wait for
 the user to choose one.
 Parameters: None.
 Returns  : The menu choice.                             */

int menu()
{
    int choice ;
    
    /* Display the menu. */
    printf( "\n\n 1. Add     an employee\n\n" ) ;
    printf( " 2. Delete  an employee\n\n" ) ;
    printf( " 3. Display an employee\n\n" ) ;
    printf( " 4. Display all employees\n\n" ) ;
    printf( " 0. Quit\n\n" ) ;
    printf( "Please enter your choice (0 to 3): " ) ;
    
    /* Get the option. */
    do
    {
        scanf( "%d", &choice ) ;
    }  while ( choice <0 || choice > 4 ) ;
    
    return ( choice ) ;
}

/* Function : search_database()
 Purpose  : Search the database for an employee number.
 Parameters: A pointer to the employee array and
 an employee number.
 Returns  : The array index corresponding to the position
 in the database of the employee record.         */

int search_database( const EMPLOYEE person_array[],
                    const unsigned int emp_no )
{
    int i = 0 ;
    
    /* Search for the employee number in the database, starting at
     the first record and continuing until the employee number is
     found or until the end of the database is reached.          */
    while ( person_array[i].number != emp_no && i < MAX_PERSONS )
        i++ ;
    
    return ( i ) ;
}
