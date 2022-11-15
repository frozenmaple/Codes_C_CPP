/*
** BF_Algo_for_version.c for 字符串普通模式匹配BF算法演示 in c:\Users\froze\Documents\C Codes
** 用for循环遍历
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Mon Jul 21 下午4:51:45 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//BF算法普通模式匹配检测，返回值是匹配时对应的主串dad_str的第几位元素
//若匹配失败，则返回-1
int str_match(char *dad_str, char *son_str);

int main()
{
    int i;
    char *dad_str = "www.google.com";
    char *son_str = "google";
    i = str_match(dad_str, son_str);
    return 0;
}

int str_match(char *dad_str, char *son_str)
{

    //父字符串 & 子字符串的长度
    int len_a, len_b;
    len_a = strlen(dad_str);
    len_b = strlen(son_str);

    if (len_a < len_b)
    {
        printf("matching failed\n");
        return -1;
    }

    int i, j;
    //从主串第一位开始遍历
    for (i = 0; i < len_a; i++)
    {
        //子串开始遍历并检测匹配
        for (j = 0; j < len_b; j++)
        {
            //若匹配，则指针均递增
            if (son_str[j] == dad_str[i + j])
            {
                //若子串已经全部遍历一遍，说明完全匹配
                if (j == len_b - 1)
                {
                    printf("matching successfully at dad string's %d element\n", i + 1);
                    return i;
                }
                continue;
            }
            //若不匹配，break跳出当前for(j)循环，下一次子串重新从头检测匹配
            break;
        }
    }
    //若主串遍历到最后，说明匹配已失败
    if (i == len_a)
    {
        printf("matching failed\n");
        return -1;
    }
}