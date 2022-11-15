/*
** Sunday_Str_Find_Replace.c for Sunday算法实现字符串查找替换 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Wed Jul 30 上午11:08:28 2019 frozenmaple
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define n 100

//Sunday算法，返回第一次匹配发生的位置，将其存储在一个单独变量pos_match中
//返回的匹配位置数符合人类读数习惯，即第一位匹配的话就返回1，而非C代码数组定义中的0；
void Sunday_match(const char *targ_str, const char *patt_str, int *pos_match_ptr);

//Sunday_Adv算法，返回所有匹配发生的位置，将其存储在一个单独数组pos_found[]中
void Sunday_Adv_match(const char *targ_str, const char *patt_str, int *pos_found);

//根据Sunday_Adv算法返回的pos_found[]数组信息，对原始字符串进行替换
char *Str_Find_Replace(char *targ_str, char *patt_str, char *repl_str, int *pos_found);

//返回字符在串中的位置，若不存在该字符，则返回-1
int Check_char(const char *patt_str, char ch);

int main()
{
    char patt_str[n] = "ing";
    char targ_str[n] = "substring searching algorithm";
    char repl_str[] = "I love you";
    char *new_str = (char *)malloc(n * sizeof(char));
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

    Sunday_match(targ_str, patt_str, pos_match_ptr);

    Sunday_Adv_match(targ_str, patt_str, pos_found);

    i = 0;
    printf("pos_found[] are：\n");
    while (pos_found[i] != -1)
    {
        printf("%d ", pos_found[i]);
        i++;
    }
    printf("\n");

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

int Check_char(const char *patt_str, char ch)
{
    int len_patt = strlen(patt_str);
    int i = 0;
    int position = -1;

    while (i < len_patt)
    {
        if (ch == patt_str[i])
        {
            position = i;
        }
        i++;
    }

    return position;
}

void Sunday_match(const char *targ_str, const char *patt_str, int *pos_match_ptr)
{
    int len_targ = strlen(targ_str);
    int len_patt = strlen(patt_str);
    int i = 0;
    int j = 0;

    //用于记录targ_str[i_temp]在模式串中的位置，找不到则返回-1；默认值也设为-1
    int position = -1;

    //记录当前失配发生时，主串中需要验证的下一位字符，
    //即主串中此时对应模式串队尾的后一位字符
    int i_temp;

    //用于记录position不为-1，即targ_str[i_temp]能在模式串中找到时，
    //下一步主串和子串开始匹配时的主串首位
    int i_tt;

    if (len_targ < len_patt)
    {
        printf("patt_str is longer than targ_str\n");
        exit(1);
    }

    while (i < len_targ && j < len_patt)
    {
        if (targ_str[i] == patt_str[j])
        {
            i++;
            j++;
        }
        else
        {
            i_temp = i + len_patt - j;
            position = Check_char(patt_str, targ_str[i_temp]);
            if (position == -1)
            {
                i = i_temp + 1;
                j = 0;
            }
            else
            {
                i = i_temp - position;
                i_tt = i;
                j = 0;
            }
        }
    }

    if (j == len_patt)
    {
        *pos_match_ptr = i_tt + 1; //此处加1是为了符合人类计数习惯
        printf("match successfully at %dth location\n", i_tt + 1);
    }
    if (i == len_targ)
    {
        printf("match failed\n");
    }
}

void Sunday_Adv_match(const char *targ_str, const char *patt_str, int *pos_found)
{
    int len_targ = strlen(targ_str);
    int len_patt = strlen(patt_str);
    int i = 0; //循环主串，即文本串
    int j = 0; //循环子串，即模式串
    int k = 0; //循环pos_found[]数组

    //用于记录targ_str[i_temp]在模式串中的位置，找不到则返回-1；默认值也设为-1
    int position = -1;

    //记录当前失配发生时，主串中需要验证的下一位字符，
    //即主串中此时对应模式串队尾的后一位字符
    int i_temp;

    //用于记录position不为-1，即targ_str[i_temp]能在模式串中找到时，
    //下一步主串和子串开始匹配时的主串首位
    int i_tt;

    if (len_targ < len_patt)
    {
        printf("patt_str is longer than targ_str\n");
        exit(1);
    }

    while (i < len_targ)
    {
        if (targ_str[i] == patt_str[j])
        {
            i++;
            j++;
        }
        else
        {
            i_temp = i + len_patt - j;
            position = Check_char(patt_str, targ_str[i_temp]);
            if (position == -1)
            {
                i = i_temp + 1;
                j = 0;
            }
            else
            {
                i = i_temp - position;
                i_tt = i;
                j = 0;
            }
        }
        if (j == len_patt)
        {
            printf("match successfully at %dth location\n", i_tt + 1);
            pos_found[k] = i_tt + 1; //此处加1是为了符合人类计数习惯
            k++;
            j = 0;
        }
    }

    if (k == 0)
    {
        printf("matching failed\n");
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

    int i = 0;
    int j;
    //用于记录替换后的队尾指针位置
    int j_temp = 0;
    //用于记录替换后原字符串下一次开始的位置
    int k = 0;
    int k_temp = 0;

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
    //补上最后一次后剩余的字符串
    for (j = j_temp; k < len_targ; j++, k++)
    {
        temp_str[j] = targ_str[k];
    }
    temp_str[j] = '\0';

    return temp_str;
}