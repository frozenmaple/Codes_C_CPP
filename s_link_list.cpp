/*
** s_link_list.c for static linked link example in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Thu Jul 3 上午10:26:08 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define maxSize 7
typedef struct Static_List
{
    int data;
    int cur;
} s_link;

//将结构体数组中所有分量链接到备用链表中
void reserveArr(s_link *array);
//初始化静态链表，返回值是含数值链表的头结点位置
int initArr(s_link *array);
//输出函数
void displayArr(s_link *array, int body);
//从备用链表上摘下空闲节点的函数
int mallocArr(s_link *array);
//insert a new value
//head_loc static link list's head node's location
//new_ele is new value
//new_loc is new insert node position
void insertArr(s_link *array, int head_loc, int new_ele, int new_loc);
//let data node back to spare node，使其变为备用链表紧跟头节点的后一节点
void freeArr(s_link *array, int del_loc);
//
void delArr(s_link *array, int head_loc, int del_ele);
//寻找特定元素
int searArr(s_link *array, int head_loc, int value);
//替换静态链表内元素
void subArr(s_link *array, int head_loc, int old_ele, int new_ele);

int main()
{
    //静态链表本身要利用数组连续分配内存的特性，所以此处要用数组形式，不能用指针动态分配了
    s_link array[maxSize];
    int body = initArr(array);
    displayArr(array, body);
    insertArr(array, body, 100, 4);
    displayArr(array, body);
    //delArr(array, body, 100);
    //displayArr(array, body);
    int ii = searArr(array, body, 100);
    if (ii == -1)
    {
        printf("the value is not found\n");
    }
    else
    {
        printf("the value is at %dth position in the s_list\n", ii);
    }

    return 0;
}

//创建备用链表
void reserveArr(s_link *array)
{
    for (int i = 0; i < maxSize; i++)
    {
        array[i].cur = i + 1; //将每个数组分量链接到一起
        array[i].data = -1;
    }
    array[maxSize - 1].cur = 0; //链表最后一个结点的游标值为0
}
//提取分配空间
int mallocArr(s_link *array)
{
    //若备用链表非空，则返回分配的结点下标，否则返回 0（当分配最后一个结点时，该结点的游标值为 0）
    int i = array[0].cur;
    if (array[0].cur)
    {
        array[0].cur = array[i].cur;
    }
    return i;
}

//初始化静态链表
int initArr(s_link *array)
{
    reserveArr(array);
    int body = mallocArr(array);
    //声明一个变量，把它当指针使，指向链表的最后的一个结点，因为链表为空，所以和头结点重合
    int tempBody = body;
    for (int i = 1; i < 4; i++)
    {
        int j = mallocArr(array); //从备用链表中拿出空闲的分量
        array[tempBody].cur = j;  //将申请的空闲分量链接在链表的最后一个结点后面
        array[j].data = i;        //给新申请的分量的数据域初始化
        tempBody = j;             //将指向链表最后一个结点的指针后移
    }
    array[tempBody].cur = 0; //新的链表最后一个结点的指针设置为0
    return body;
}
void displayArr(s_link *array, int body)
{
    int tempBody = body; //tempBody准备做遍历使用
    while (array[tempBody].cur)
    {
        printf("%d,%d ", array[tempBody].data, array[tempBody].cur);
        tempBody = array[tempBody].cur;
    }
    printf("%d,%d\n", array[tempBody].data, array[tempBody].cur);
}

void insertArr(s_link *array, int head_loc, int new_ele, int new_loc)
{
    int i;
    int temp_loc = head_loc;
    //得到要插入的新结点的上一个数组位置
    for (i = 1; i < new_loc; i++)
    {
        temp_loc = array[temp_loc].cur;
    }
    int insert = mallocArr(array); //申请空间，准备插入
    array[insert].data = new_ele;
    array[insert].cur = array[temp_loc].cur; //新插入结点的游标等于其直接前驱结点的游标
    array[temp_loc].cur = insert;            //直接前驱结点的游标等于新插入结点所在数组中的下标
}

void freeArr(s_link *array, int del_loc)
{
    array[del_loc].cur = array[0].cur;
    array[0].cur = del_loc;
}

void delArr(s_link *array, int head_loc, int del_ele)
{
    int temp_loc = head_loc; //取得数据静态链表的头节点所在的数组位置
    int i;
    //寻找需要删除的节点，如果没找到，打印错误消息
    while (array[temp_loc].data != del_ele)
    {
        temp_loc = array[temp_loc].cur;
        if (temp_loc == 0)
        {
            printf("链表中没有此数据\n");
            exit(0);
        }
    }
    //重新设置游标，用于标定待删除节点的上一节点
    i = head_loc;
    while (array[i].cur != temp_loc)
    {
        i = array[i].cur;
    }
    array[i].cur = array[temp_loc].cur;
    freeArr(array, temp_loc);
}

int searArr(s_link *array, int head_loc, int value)
{
    int temp_loc = head_loc;
    //当还没到最后一个数据节点时，不断遍历
    while (array[temp_loc].cur != 0)
    {
        if (array[temp_loc].data == value)
        {
            return temp_loc;
        }
        temp_loc = array[temp_loc].cur;
    }
    //最后一个节点里的数据还要判断一下
    if (array[temp_loc].data == value)
    {
        return temp_loc;
    }
    else
    {
        return -1;
    }
}

void subArr(s_link *array, int head_loc, int old_ele, int new_ele)
{
    int i = searArr(array, head_loc, old_ele);
    if (i != -1)
    {
        array[i].data = new_ele;
    }
    else
    {
        printf("not found old_ele\n");
    }
}