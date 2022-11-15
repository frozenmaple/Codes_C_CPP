/*
** KMP_Algo.c for 字符串快速模式匹配KMP算法演示 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Sun Jul 27 下午1:38:41 2019 frozenmaple
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define n 10
//计算模式串patt_str对应的next[]数组
//返回值是数组起始地址，数组首位next[0]初始化为-1
int *Next(const char *patt_str);

//改进效率版的next()数组求解函数
int *Next_Adv(const char *patt_str);

//KMP算法，返回第一次匹配发生的位置，将其存储在一个单独变量pos_match中
void KMP_match(const char *targ_str, const char *patt_str, int *pos_match_ptr);

//KMP_Adv算法，返回所有匹配发生的位置，将其存储在一个单独数组pos_found[]中
void KMP_Adv_match(const char *targ_str, const char *patt_str, int *pos_found);

int main()
{
    char patt_str[] = "aaaaab";
    char targ_str[] = "ababcabaaaaabbaaaaabxxxxxaaaaab";
    int *next = Next(patt_str);
    int i;
    //初始化pos_match
    int pos_match = 0;
    int *pos_match_ptr = &pos_match;
    //初始化pos_found[]，令其所有元素置为-1
    int pos_found[n];
    for (i = 0; i < n; i++)
    {
        pos_found[i] = -1;
    }
    //展示next()数组内容
    printf("Next() return values are:\n");
    for (i = 0; i < strlen(patt_str); i++)
    {
        printf("%d ", next[i]);
    }
    printf("\n");

    //展示next()数组内容，基于改进版Next_adv()
    next = Next_Adv(patt_str);
    printf("Next_Adv() return values are:\n");
    for (i = 0; i < strlen(patt_str); i++)
    {
        printf("%d ", next[i]);
    }
    printf("\n");

    KMP_match(targ_str, patt_str, pos_match_ptr);

    KMP_Adv_match(targ_str, patt_str, pos_found);

    printf("pos_match is %d\n", pos_match);

    i = 0;
    printf("pos_found[] are：\n");
    while (pos_found[i] != -1)
    {
        printf("%d ", pos_found[i]);
        i++;
    }
    printf("\n");

    return 0;
}

int *Next(const char *patt_str)
{
    int len = strlen(patt_str);
    int *next = (int *)malloc(len * sizeof(int));
    next[0] = -1;
    int i = 0;
    int j = -1;
    while (i < len - 1)
    {
        if (j == -1 || patt_str[j] == patt_str[i])
        {
            next[++i] = ++j;
        }
        else
        {
            j = next[j];
        }
    }
    return next;
}

int *Next_Adv(const char *patt_str)
{
    int len = strlen(patt_str);
    int *next = (int *)malloc(len * sizeof(int));
    next[0] = -1;
    int i = 0;
    int j = -1;
    while (i < len - 1)
    {
        if (j == -1 || patt_str[j] == patt_str[i])
        {
            if (patt_str[++j] == patt_str[++i]) //当后续两个字符继续相等时
            {
                //因为不能出现p[i] = p[next[i]]，所以当出现时需要继续递归，j = next[j] = next[next[j]]
                next[i] = next[j];
            }
            else
            {
                next[i] = j; //注意此时i和j均已自增1
            }
        }
        else
        {
            j = next[j];
        }
    }
    return next;
}

void KMP_match(const char *targ_str, const char *patt_str, int *pos_match_ptr)
{
    //求得模式串的next()数组
    //int *next = Next(patt_str);
    int *next = Next_Adv(patt_str);
    int i = 0, j = 0;
    int len_targ = strlen(targ_str);
    int len_patt = strlen(patt_str);
    while (i < len_targ && j < len_patt)
    {
        if (j == -1 || targ_str[i] == patt_str[j])
        {
            i++;
            j++;
        }
        else
        {
            j = next[j];
        }
    }

    //跳出循环有两种可能，i=strlen(targ_str)说明已经遍历完主串，匹配失败；j=strlen(patt_str),说明子串遍历完成，在主串中成功匹配
    if (j == len_patt)
    {
        *pos_match_ptr = i - len_patt + 1;
        printf("matching successfully at %d position\n", i - len_patt + 1);
    }
    else //运行到此，为i==strlen(targ_str)的情况
    {
        printf("matching failed\n");
    }
}

void KMP_Adv_match(const char *targ_str, const char *patt_str, int *pos_found)
{
    //求得模式串的next()数组
    //int *next = Next(patt_str);
    int *next = Next_Adv(patt_str);
    int i = 0, j = 0;
    int len_targ = strlen(targ_str);
    int len_patt = strlen(patt_str);
    int num_found = 0; //设为匹配发生次数

    while (i < len_targ)
    {
        if (j == -1 || targ_str[i] == patt_str[j])
        {
            i++;
            j++;
        }
        else
        {
            j = next[j];
        }

        if (j == len_patt)
        {
            printf("matching successfully at %d position\n", i - len_patt + 1);
            j = 0;
            pos_found[num_found] = i - len_patt + 1;
            num_found++;
        }
    }

    //运行到此，为i==strlen(targ_str)的情况
    if (num_found == 0)
    {
        printf("matching failed\n");
    }
    else
    {
        return;
    }
}