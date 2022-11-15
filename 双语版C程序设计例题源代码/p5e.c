 /* Program example P5E
    Demonstration of the else-if statement. */
 #include <stdio.h> 
 int main() 
 { 
   float mark ; 
   char  grade ; 
 
   printf( "Please enter an exam mark " ) ; 
   scanf( "%f", &mark ) ;

   if ( mark >= 70 ) 
     grade = 'A' ; 
   else if ( mark >= 60 ) 
          grade = 'B' ; 
   else if ( mark >= 50 ) 
          grade = 'C' ; 
   else if ( mark >= 40 ) 
          grade = 'D'; 
   else if ( mark >= 30 ) 
          grade = 'E' ; 
   else grade = 'F' ; 

   printf( "A mark of %4.1f is a grade of %c\n", mark, grade ) ; 
   return 0 ; 
 } 

