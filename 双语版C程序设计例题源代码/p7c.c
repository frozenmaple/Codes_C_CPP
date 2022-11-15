 /* Program example P7C
    This program inputs a series of ages from the keyboard
    and displays the youngest, the oldest and the average.  */  
 #include <stdio.h> 
 #define SIZE 10 
 int main() 
 { 
   int ages[SIZE] ; 
   int i ; 
   int total_age = 0 ; 
   int youngest, oldest ;
 
   printf( "Please enter the ages of %d people\n", SIZE ) ; 
   /* Input and total each age. */ 
   for ( i = 0 ; i < SIZE ; i ++ ) 
   { 
     scanf( "%d", &ages[i] ) ; 
     total_age += ages[i] ; 
   } 

   youngest = ages[0] ; 
   oldest = ages[0] ;
 
   for ( i = 0 ; i < SIZE ; i ++ ) 
   { 
     if ( ages[i] > oldest ) 
     { 
       oldest = ages[i] ; 
     } 
     if ( ages[i] < youngest ) 
     { 
       youngest = ages[i] ; 
     } 
   } 

   printf( "The youngest is %d\n", youngest) ; 
   printf( "The oldest is %d\n", oldest ) ; 
   printf( "The average is %d\n", total_age / SIZE ) ; 
   return 0 ;
 } 

