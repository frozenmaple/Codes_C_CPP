/*
** demo_null_strlen.cpp for string_char-array_diff in /mnt/d/Codes/C_Lang
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Thu Sep 22 1:32:30 PM 2022 frozenmaple
** Last update Thu Sep 22 1:32:30 PM 2022 frozenmaple
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char s[] = {0};	   				// s ia a proper string, this is value 0 not the symbol '0'
	char s2[] = {'0','a'}; 			// s2 is a proper char array, but not a proper string

	printf("%zd\n", strlen(s));	 	// Not include the '\0'
	printf("%zd\n", strlen(s2)); 	// the value is not always to be 2

	printf("%zd\n", sizeof(s));		// include the '\0'
	printf("%zd\n", sizeof(s2));	// include two chars '0' and 'a'

	return 0;
}
