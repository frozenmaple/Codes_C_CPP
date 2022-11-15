/*
** BF_Algo_while_version.c for 字符串普通模式匹配BF算法演示 in c:\Users\froze\Documents\C Codes
** 用while循环
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Mon Jul 21 下午4:57:46 2019 frozenmaple
*/

#include <stdio.h>
#include <string.h>
//串普通模式匹配算法的实现函数，其中 B是伪主串，A是伪子串
int mate(char *B, char *A)
{
    int i = 0, j = 0;
    while (i < strlen(B) && j < strlen(A))
    {
        if (B[i] == A[j])
        {
            i++;
            j++;
        }
        else
        {
            i = i - j + 1;
            j = 0;
        }
    }
    //跳出循环有两种可能，i=strlen(B)说明已经遍历完主串，匹配失败；j=strlen(A),说明子串遍历完成，在主串中成功匹配
    if (j == strlen(A))
    {
        printf("matching successfully at %d position\n", i - strlen(A) + 1);
        return i - strlen(A) + 1;
    }
    else//运行到此，为i==strlen(B)的情况
    {
        printf("matching failed\n");
        return -1;
    }
}
int main()
{
    int number = mate("ababcabcacbab", "abcac");
    //printf("%d\n", number);
    return 0;
}