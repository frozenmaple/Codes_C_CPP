/* Program example P14A
   Demonstration of #define. */ 
#define BEGIN { 
#define END } 
#define IN_FORMAT "%d" 
#define OUT_FORMAT "You entered the number %d\n" 
#define PRINT printf 
#define INPUT scanf 
#define THEN ) 
#define IF if( 
#include <stdio.h> 
int main() 
BEGIN 
int n ; 
PRINT( "Enter a number (0 to end) " ) ; 
do 
BEGIN 
INPUT( IN_FORMAT, &n ) ; 
IF n>0 THEN 
PRINT( OUT_FORMAT, n ) ; 
END 
while ( n>0 ) ; 
return 0 ;
END
