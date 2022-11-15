 /* Program example P5A
    Demonstration of the if statement. */ 
 #include <stdio.h> 
 int main() 
 { 
   float account_balance ; 
 
   printf( "What is your account balance? " ) ; 
   scanf( "%f", &account_balance ) ; 
   if ( account_balance < 0 ) 
     printf( "Your account is in the red\n" ) ; 
   if ( account_balance >= 0 ) 
     printf( "Your account is in the black\n") ; 
   return 0 ;
 } 

