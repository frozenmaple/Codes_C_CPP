/*
** lab_ex_7_1.c for C Codes in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午3:20:30 2019 frozenmaple
** Last update Fri Oct 11 下午3:20:30 2019 frozenmaple
*/


/*
给定如下的结构体定义：
struct identification
{
    char name[21] ;
    float height ;
    float weight  ;
    char hair_colour[11] ;
    char eye_colour[11] ;
} ;
以及如下的变量id定义：
struct identification id;
以及如下的函数调用：
input_data( &id ) ;
display_data( const id ) ;
写出函数input_data( &id )和display_data( const id )。
*/
#include <stdio.h>

struct identification
{
    char name[21];
    float height;
    float weight;
    char hair_colour[11];
    char eye_colour[11];
};

struct identification id;

void input_data(struct identification *id);

void display_data(const struct identification id);

int main(void)
{
    

    input_data(&id);
    display_data(id);

    return 0;
}

void input_data(struct identification *id)
{
    printf("请输入姓名：");
    scanf("%s", id->name);
    printf("请输入身高：");
    scanf("%f", &id->height);   //id->height is a variable, &(id->height)
    printf("请输入体重：");
    scanf("%f", &id->weight);
    printf("请输入头发颜色：");
    scanf("%s", id->hair_colour);
    printf("请输入眼睛颜色：");
    scanf("%s", id->eye_colour);
}

void display_data(const struct identification id)
{
    printf("姓名：%s\n", id.name);
    printf("身高：%.2f\n", id.height);
    printf("体重：%.2f\n", id.weight);
    printf("头发颜色：%s\n", id.hair_colour);
    printf("眼睛颜色：%s\n", id.eye_colour);
}