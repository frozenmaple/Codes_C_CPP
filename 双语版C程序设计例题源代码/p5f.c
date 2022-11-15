 /* Program example P5F
    A simple four-function calculator. 
    This program demonstrates the use of the switch statement. */ 
 #include <stdio.h> 
 int main() 
 { 
   char operator ; 
   float num1, num2, answer ; 
 
   printf( "Please enter an arithmetic expression (e.g. 1 + 2) " ) ;
   scanf( "%f %c%f", &num1, &operator, &num2 ) ; 

   if(operator == ' ')
   	printf("there is a space");

   switch ( operator ) 
   { 
     case '+' : 
       answer = num1 + num2 ; 
       printf( "%f plus %f equals %f\n", num1, num2, answer ) ;
       break ; 
     case '-' : 
       answer = num1 - num2 ; 
       printf( "%f minus %f equals %f\n", num1, num2, answer ) ;
       break ; 
     case '*' : 
       answer = num1 * num2 ; 
       printf( "%f multiplied by %f equals %f\n",num1,num2,answer ) ;
       break ; 
     case '/' : 
  	   if(num2==0)
	     printf("cannot divide 0\n");
       else
       {
         answer = num1 / num2 ; 
         printf( "%f divided by %f equals %f\n",num1,num2,answer ) ; 	
       }
       break ; 
     default : 
       printf( "Invalid operator\n" ) ; 
   }
  return 0 ;
 } 

