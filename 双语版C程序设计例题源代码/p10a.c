 /* Program example P10A
    To demonstrate the use of %s format string in printf(). */
 #include <stdio.h>
 int main()
 {
   char love_note[9] = "I love C" ;

   /* Print out a ruler line */
   printf( "1234567890123456789012345\n" ) ;
   printf( "%s", love_note) ;    /* No width specified in %s    */
   printf( ".\n" ) ;             /* Display a . after the string*/
   printf( "%20s", love_note ) ; /* Width 20, right justified.  */
   printf( ".\n" ) ;
   printf( "%-20s", love_note ); /* Width 20, left justified.   */
   printf( ".\n" ) ;
   printf( "%.6s", love_note ) ; /* First 6 characters.         */
   printf( ".\n" ) ;
   printf( "%20.6s", love_note ) ; /* First 6 characters,       */
   printf( ".\n" ) ;               /* width 20, right justified.*/
   printf( "%-20.6s", love_note ); /* First 6 characters,       */
   printf( ".\n" ) ;               /* width 20, left justified. */
   return 0 ;
 }

