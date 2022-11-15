//demo for string end symbol '\0' , compare with char '0'
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20] = {'0'}; 
    printf("%c %c\n", str[0], str[1]);
    printf("%d %d", str[0], str[1]);

    return 0;
}
