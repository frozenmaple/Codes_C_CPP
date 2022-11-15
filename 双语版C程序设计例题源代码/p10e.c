 /* Program example P10E
    This program displays each character of the string "some text"
    on a new line, using a pointer variable.                    */
 #include <stdio.h> 
 int main() 
 { 
   char *p = "some text" ; /*p points to the first character 's' */

   /* The next while loop is performed until p points to the null
      character '\0' at the end of the string. */
   while ( *p != '\0' ) 
   { 
     printf( "%c\n", *p ) ; /* Display each character. */
     p++ ; /* p now points to the next character.      */
   }
  return 0 ;
 }

