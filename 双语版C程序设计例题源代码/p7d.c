 /* Program example P7D
    To display the number of days in a month. */ 
 #include <stdio.h> 
 #define NO_OF_MONTHS 12 
 int main() 
 { 
   int days[ NO_OF_MONTHS ] = 
           { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } ;
   int month ; 
 
   printf( "Please enter a month (1 = Jan., 2 = Feb., etc.) " ) ;
   do 
   { 
     scanf( "%d", &month ) ; 
   } 
   while ( month < 1 || month > 12 ) ;
 
   printf( "\nThe number of days in month %d is %d\n", 
           month, days[month-1] ) ;
   return 0 ;
 } 

