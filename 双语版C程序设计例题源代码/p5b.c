 /* Program example P5B
    Demonstration of the if-else statement. */ 
 #include <stdio.h> 
 int main() 
 { 
   float account_balance ; 
 
   printf( "What is your account balance? " ) ; 
   scanf( "%f", &account_balance ) ; 
   if ( account_balance < 0 ) 
     printf( "Your account is in the red\n" ) ; 
   else 
     printf( "Your account is in the black\n" ) ;
  return 0 ;
 } 

