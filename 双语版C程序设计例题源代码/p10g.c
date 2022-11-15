 /* Program example P10G
    This program inputs five words of different
    lengths and display the longest.           */ 
 #include <stdio.h>
 #include <string.h>
 int main() 
 { 
   char word[5][81] ; /* An array to hold the five words. */ 
   int index, index_of_longest ; 
   unsigned int longest_len = 0 ;
 
   /* Input the words from the keyboard. */ 
   for ( index = 0 ; index < 5 ; index++ ) 
   { 
     printf( "\nEnter word%d: ", index+1 ) ; 
     scanf( "%s", word[index] ) ; 
   }

   /* Now find the longest word. */ 
   for ( index = 0 ; index < 5 ; index++ ) 
   { 
     if ( strlen( word[index] ) > longest_len ) 
     { 
       longest_len = strlen ( word[index] ) ; 
       index_of_longest = index ; 
     } 
   } 

   printf( "\nThe longest word is %s\n", word[index_of_longest]) ;
   return  0 ;
 } 

