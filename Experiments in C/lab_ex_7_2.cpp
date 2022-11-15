/*
** lab_ex_7_2.c for C Codes in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Fri Oct 11 下午3:46:07 2019 frozenmaple
** Last update Fri Oct 11 下午3:46:07 2019 frozenmaple
*/


#include <stdio.h>

struct stock_record
{
    int Num;
    char description[21];
    float price;
};

typedef struct stock_record RECORD;

void init_record(RECORD *stock_item);
void disp_record(RECORD *stock_item);

int main()
{
    RECORD stock_item;
    RECORD *item_ptr = &stock_item;

    init_record(item_ptr);

    disp_record(item_ptr);

    return 0;
}

void init_record(RECORD *stock_item)
{
    printf("please input the Num:\n");
    scanf("%d", &(stock_item->Num));
    printf("please input the description:\n");
    scanf("%s", stock_item->description);
    printf("please input the price:\n");
    scanf("%f", &stock_item->price);
}

void disp_record(RECORD *stock_item)
{
    printf("-----------\n");
    printf("the Num of item is: %d\n", stock_item->Num);
    printf("the description of item is: %s\n", stock_item->description);
    printf("the Num of item is: %f\n", stock_item->price);
}