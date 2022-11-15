 /* Program example P12A
    This program assigns values to two structure variables. */
 #include <string.h>
 #include <stdio.h>
 int main()
 {
   /* Declare the structure template. */
   struct student_rec
   {
     /* Declare the members of the structure. */
     int number ;
     char surname[21] ;
     char first_name[11] ;
     int scores[5] ;
   } ;

   /* Define two variables having the type struct student_rec. */
   struct student_rec student1, student2 ;

   int i ;

   /* Read in values for the members of student1. */
   printf( "Number: " ) ;
   scanf( "%d", &student1.number ) ;
   printf( "Surname: " ) ;
   scanf( "%20s", student1.surname ) ;
   printf( "First name: " ) ;
   scanf( "%10s", student1.first_name ) ;
   printf( "Five test scores: " ) ;
   for ( i= 0 ; i < 5 ; i++ )
     scanf( "%d", &student1.scores[i] ) ; 

   /* Now assign values to the members of student2.
      The assignments are not meant to be meaningful: they
      are for demonstration purposes only.                */

   student2.number = student1.number + 1 ;
   strcpy( student2.surname, "Smith" ) ;
   strcpy( student2.first_name, "Mary" ) ;
   for ( i= 0 ; i < 5 ; i++ )
     student2.scores[i] = 100 ;

   /* Display the values in the members of student1. */
   printf( "\n\nThe values in student1 are:" ) ;
   printf( "\nNumber is %d", student1.number ) ;
   printf( "\nSurname is %s", student1.surname ) ;
   printf( "\nFirst name is %s", student1.first_name ) ;
   printf( "\nScores are: " ) ;
   for ( i= 0 ; i < 5 ; i++ )
     printf( " %d ", student1.scores[i] ) ; 

   /* Display the values in the members of student2. */
   printf( "\n\nThe values in student2 are:" ) ;
   printf( "\nNumber is %d", student2.number ) ;
   printf( "\nSurname is %s", student2.surname ) ;
   printf( "\nFirst name is %s", student2.first_name ) ;
   printf( "\nScores are: " ) ;
   for ( i= 0 ; i < 5 ; i++ )
     printf( " %d ", student2.scores[i] ) ;
   printf( "\n" ) ;
   return 0 ;
 }

