 /* Program example P7A
    This program calculates the average age of ten people 
    using ten different variables.                       */ 
 #include <stdio.h> 
 int main() 
 { 
   int age1, age2, age3, age4, age5, 
       age6, age7, age8, age9, age10 ; 
   int total_age ; 
 
   printf( "Please enter the ages of ten people\n" ) ; 
   /* Input each age from the keyboard. */ 
   scanf( "%d", &age1 ) ; 
   scanf( "%d", &age2 ) ; 
   scanf( "%d", &age3 ) ; 
   scanf( "%d", &age4 ) ; 
   scanf( "%d", &age5 ) ; 
   scanf( "%d", &age6 ) ; 
   scanf( "%d", &age7 ) ; 
   scanf( "%d", &age8 ) ; 
   scanf( "%d", &age9 ) ; 
   scanf( "%d", &age10) ; 

   total_age = age1 + age2 + age3 + age4 + age5 + 
               age6 + age7 +age8  + age9 + age10 ;
   
   printf( "The average of %d %d %d %d %d %d %d %d %d %d is %d\n",
            age1,age2,age3,age4,age5,age6,age7,age8,age9,age10,
            total_age / 10 ) ;

   return 0 ;
 }

