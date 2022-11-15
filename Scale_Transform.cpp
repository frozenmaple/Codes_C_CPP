/*
** Scale_Transform.c for 进制转换器 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Wed Jul 9 下午4:52:55 2019 frozenmaple
*/
 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define n 100

int top = -1;
//push() declaration
void push(char *data, char new_char);

//pop() declaration
void pop(char *data);

//任意m进制字符串数组内容转十进制数
int char_arr_to_deci_num(char *data, int old_scale);

//十进制数转任意多进制数字符串数组
void decinum_to_multichar(int deci_data, char *data,int new_scale);

int main()
{
    char data[n];
    int scale;
    int new_scale;
    printf("input old scale\n");
    scanf("%d", &scale);
    printf("input data in string format\n");
    scanf("%s", data);
    int deci_data = char_arr_to_deci_num(data, scale);
    printf("input new scale\n");
    scanf("%d", &new_scale);
    //decinum_to_multichar(deci_data, data, new_scale);
    while (deci_data / new_scale)
    {
        push(data, deci_data % new_scale);
        deci_data /= new_scale;
    }
    push(data, deci_data % new_scale);
    printf("转换后的结果为：\n");
    while (top != -1)
    {
        pop(data);
    }
    printf("\n");
    return 0;
}

void push(char *data, char new_char)
{
    data[++top] = new_char;
}

void pop(char *data)
{
    if (top==-1) 
    {
        printf("the stack is already empty\n");
        return ;
    }
    else
    {
        if (data[top]>10) 
        {
            printf("%c", data[top]+55);
        }
        else
        {
            printf("%d", data[top]);
        }
    }
    top--;
}

int char_arr_to_deci_num(char *data, int old_scale)
{
    int deci_data=0;
    int len = (int)strlen(data) - 1;    //求得字符串存储的数据的十位以上的位数。
    int i;
    int temp;
    for (i = len; i >=0; i--) 
    {
        if (data[i]>=48&&data[i]<=57)   //若数组中对应的元素是0-9的ASCII码
        {
            temp = data[i] - 48;        //将0-9对应的ASCII码，转换到数值0-9
        }
        else
        {
            temp = data[i] - 55;        //将A-Z对应的ASCII码，转换到数值10-36
        }
        deci_data = deci_data + temp * pow(old_scale, len - i);
    }
    return deci_data;
}

void decinum_to_multichar(int deci_data, char *data, int new_scale)
{
    while (deci_data / new_scale)
    {
        push(data, deci_data % new_scale);
        deci_data /= new_scale;
    }
    push(data, deci_data % new_scale);
    printf("转换后的结果为：\n");
    while (top != -1)
    {
        pop(data);
    }
    printf("\n");
}