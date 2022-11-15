/*
** test_temptr3.c for  in c:\Users\froze\Documents\C Codes
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

    ptr = str + 1;                    //equal to "ptr = &str[1];"
    printf("*ptr is %c\n", *ptr);

    ptr = str + 1;                    //let ptr ptroints back to &str[1]
    printf("*ptr++ is %c\n", *ptr++);   //after excution, ptr ptroints to

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

