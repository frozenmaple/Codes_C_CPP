/* Program example P11M
    Demonstration of the functions sin(), cos(), and tan().
 The angle (in degrees) may be typed on the command line or
 input when the program is running.                        */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define DEGREES_TO_RADIANS 3.14157/180
int main( int argc, char **argv ) 
{ 
    double degrees, radians ; 
    
    /* Has the user typed the angle on the command line? */ 
    if ( argc < 2 ) 
    { 
        /* No value on command line so ask the user for the angle. */ 
        printf( "Input the angle in degrees: " ) ; 
        scanf( "%lf", &degrees ) ; 
    } 
    else
    {
        /* The user typed the angle on the command line.
         The angle must be converted from an ASCII string
         to a floating-point value using atof().               */ 
        degrees = atof( argv[1] ) ; 
    }
    /* Convert degrees to radians. */  
    radians = degrees * DEGREES_TO_RADIANS ;
    /* Display the results. */ 
    printf( "sin(%.3lf)= %.3lf\n", degrees, sin(radians) ) ; 
    printf( "cos(%.3lf)= %.3lf\n", degrees, cos(radians) ) ; 
    printf( "tan(%.3lf)= %.3lf\n", degrees, tan(radians) ) ;
    return 0 ;
}
