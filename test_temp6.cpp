/*
** test_temp6.c for 字符串查找替换 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Sat Oct 12 上午9:37:58 2019 frozenmaple
** Last update Sat Oct 12 上午9:37:58 2019 frozenmaple
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define n 100
//计算模式串patt_str对应的next[]数组
//返回值是数组起始地址，数组首位next[0]初始化为-1
int *Next(const char *patt_str);

//改进效率版的next()数组求解函数
int *Next_Adv(const char *patt_str);

//KMP算法，返回第一次匹配发生的位置，将其存储在一个单独变量pos_match中
void KMP_match(const char *targ_str, const char *patt_str, int *pos_match_ptr);

//KMP_Adv算法，返回所有匹配发生的位置，将其存储在一个单独数组pos_found[]中
void KMP_Adv_match(const char *targ_str, const char *patt_str, int *pos_found);

//根据KMP_Adv算法返回的pos_found[]数组信息，对原始字符串进行替换
char *Str_Find_Replace(char *targ_str, char *patt_str, char *repl_str, int *pos_found);

int main()
{
    char patt_str[n] = "eee";
    char targ_str[n] = "abcdeeeabcdeeeabcdeeeabcdee";
    char repl_str[] = "xxxxxx";
    char *new_str = (char *)malloc(n * sizeof(char));
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
    /* 
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
    printf("pos_match is %d\n", pos_match);
    */

    KMP_Adv_match(targ_str, patt_str, pos_found);
    /* 
    i = 0;
    printf("pos_found[] are：\n");
    while (pos_found[i] != -1)
    {
        printf("%d ", pos_found[i]);
        i++;
    }
    printf("\n");
    */
    new_str = Str_Find_Replace(targ_str, patt_str, repl_str, pos_found);
    i = 0;
    while (new_str[i] != '\0')
    {
        printf("%c", new_str[i]);
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

char *Str_Find_Replace(char *targ_str, char *patt_str, char *repl_str, int *pos_found)
{
    char *temp_str = (char *)malloc(n * sizeof(char));
    int len_targ = strlen(targ_str);
    int len_patt = strlen(patt_str);
    int len_repl = strlen(repl_str); //取得替换字符串的大小

    //防止替换的新字符串超出限制
    if (len_targ + len_patt - len_repl >= n)
    {
        printf("not enough memory for new string to fit in\n");
        exit(1);
    }

    int i = 0; //用于pos_found[]遍历
    int j = 0; //用于在新字符串中循环遍历
    int k = 0; //用于在老字符串中循环遍历
    //以下两个变量在小局域循环中是固定不变的，仅在小局域循环后值才更新到新位置
    int j_temp = 0; //用于记录新字符串下一阶段的起始位置
    int k_temp = 0; //用于记录替换后原字符串下一次开始复制的起始位置

    while (pos_found[i] != -1)
    {
        //复制上一次匹配结束后的结尾到当前匹配发生前的字符串
        for (j = j_temp; j < j_temp + pos_found[i] - k_temp - 1; j++, k++)
        {
            temp_str[j] = targ_str[k];
        }
        j_temp = j; //j_temp指向当前匹配替换开始位置
        k_temp = k + len_patt;
        k = k_temp;

        for (j = 0; j < len_repl; j++)
        {
            temp_str[j_temp + j] = repl_str[j];
        }
        j_temp = j_temp + j; //j_temp指向复制完替换字符串后的开始位置

        i++; //进行下一次pos_found[]数组的检测
    }
    //补上最后一次后源字符串可能剩余的字符串
    for (j = j_temp; k < len_targ; j++, k++)
    {
        temp_str[j] = targ_str[k];
    }
    //将新字符串的最后一位置'\0'，使其符合字符串结尾定义
    temp_str[j] = '\0';

    return temp_str;
}