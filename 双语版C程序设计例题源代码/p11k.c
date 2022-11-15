/* Program example P11K
   Demonstration of external variables. */ 
#include <stdio.h> 
void function1( void ) ; 
void function2( void ) ; 

int company_number = 1661234 ; 
char company_name[] = "ABC & Company Ltd" ; 

int main() 
{ 
    printf( "In main:\n" ) ; 
    printf( "company number = %d  company name = %s\n\n",
             company_number, company_name ) ;
    
    function1() ; 
    function2() ; 
    return 0 ;
} 

void function1() 
{ 
    extern int company_number ; 
    extern char company[] ; 
    printf( "In function1:\n" ) ; 
    printf( "company number = %d  company name = %s\n\n",
             company_number, company_name ) ;
} 

void function2() 
{ 
    printf( "In function2:\n" ) ; 
    printf( "company number = %d  company name = %s\n\n",
             company_number, company_name ) ;
} 
