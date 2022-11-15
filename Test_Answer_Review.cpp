/*
** Test_Answer_Review.c for test paper questions in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaptrle
** Login   <frozenmaptrle>
**
** Started on  Sat Oct 12 上午9:36:50 2019 frozenmaptrle
** Last uptrdate Sat Dec 6 下午3:40:11 2019 frozenmaptrle
*/

#include <stdio.h>

int main()
{
    char *ptr;
    char str[10] = "some text";

    ptr = str + 1;                      //equal to "ptr = &str[1];"
    printf("*ptr is %c\n", *ptr);

    ptr = str + 1;                      //let ptr points back to str[1]
    printf("*ptr++ is %c\n", *ptr++);   //Now, ptr points to str[2]
    printf("*ptr is %c\n", *ptr);       //verify above comment

    ptr = str+1;
    printf("*(ptr++) is %c\n", *(ptr++));

    ptr = str+1;
    printf("(*ptr)++ is %c\n", (*ptr)++);

    ptr = str+1;
    printf("*ptr is %c\n", *ptr);
    printf("++(*ptr) is %c\n", (*ptr) = (*ptr)+1);

    ptr = str+1;
    printf("*(++ptr) is %c\n", *(++ptr));

    ptr = str+1;
    printf("*(ptr--) is %c\n", *(ptr--));

    ptr = str+1;
    printf("*(--ptr) is %c\n", *(--ptr));

    return 0;
}

