 /* Program example P13G
    Demonstration of fscanf() and fprintf(). 
    This program reads a sales file, displays the data on 
    screen, and displays the total sales value. 
    The sales data is also copied to a new file.         */
 #include <stdio.h> 
 #define NAME_SIZE 31 
 int main() 
 { 
   FILE *fp_in, *fp_out ; 
   char name[ NAME_SIZE ] ;  /*  Product name.  */ 
   int quantity ;            /*  Quantity sold. */ 
   float value ;             /*  Sales value.   */ 
   float total_value = 0.0 ; 
 
   if ( (fp_in = fopen("sales.dat", "r")) == NULL ) 
   { 
     puts( "Error in opening file sales.dat ") ; 
   } 
   else if ( (fp_out = fopen("newsales.dat", "w")) != NULL ) 
   { 
     /* Read input file until EOF is encountered. */ 
     while ( (fscanf(fp_in,"%s%d%f",name,&quantity,&value))!=EOF )
     { 
       fprintf( fp_out,"%s %d %6.2f\n", name, quantity, value ) ; 
       printf( "%s %d %6.2f\n", name, quantity, value ) ; 
       total_value += value ; 
     } 
     printf( "\nTotal sales value = %7.2f\n", total_value ) ; 
     fclose( fp_in ) ; 
     fclose( fp_out ) ; 
   }
   return 0 ;
 } 

