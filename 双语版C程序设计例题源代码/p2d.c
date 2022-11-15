 /* Program example P2D
    Program to display the amount of memory required by
    some of the common data types in C. */
 #include <stdio.h> 
 int main() 
 { 
  int char_size, int_size, short_size, long_size,
      float_size, double_size ;
  
  char_size = sizeof( char ) ;
  int_size = sizeof( int ) ;
  short_size = sizeof( short int ) ;
  long_size = sizeof ( long ) ;
  float_size = sizeof( float ) ;
  double_size = sizeof( double ) ;
  
  printf( " Data type       Number of bytes\n" ) ; 
  printf( " ---------       ---------------\n" ) ; 
  printf( "  char               %d\n", char_size) ; 
  printf( "  int                %d\n", int_size ) ; 
  printf( "  short int          %d\n", short_size ) ; 
  printf( "  long int           %d\n", long_size ) ;
  printf( "  float              %d\n", float_size) ; 
  printf( "  double             %d\n", double_size ) ;
  return 0 ;        
 }

