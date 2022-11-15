 /* Program example P11N
    To demonstrate the built-in time and random functions. */
 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 int main()
 {
   int i, r ;
   time_t t ;  /* Define t as being a time type time_t,
                  as defined in time.h                 */

   /* Display the current date and time. */
   t = time( NULL ) ;
   printf( "The current date and time are: %s\n", ctime( &t ) ) ;

   /* Use the time to initialise the random number generator. */
   srand( t ) ; /* Set the seed to the current time. */

   /* Generate five random numbers between 0 and 20. */
   printf( "Five random numbers in the range 0-20:\n" ) ;
   for ( i = 0 ; i < 5 ; i++ )
   {
     r = rand() % 21 ;  /* %21 ensures a number between 0 and 20. */
     printf( "%d\n", r ) ;
   }
   return  0 ;
 }

