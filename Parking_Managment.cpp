/*
** Parking_Managment.c for 停车场管理 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** 设停车场是一个可以停放 n 辆汽车的南北方向的狭长通道，且只有一个大门可供汽车进出。
** 汽车在停车场内按车辆到达时间的先后顺序，依次由北向南排列（大门在最南端，最先到达的第一辆车停放在车场的最北端）。
** 当停车场内某辆车要离开时，在它之后进入的车辆必须先退出车场为它让路
** 待该辆车开出大门外，其它车辆再按原次序进入车场，
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Sat Jul 19 下午8:30:33 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 4 //模拟停车场最多可停的车辆数

int car_num = 0;

//车的必要信息的结构体
typedef struct car_parking
{
    int data;
    struct car_parking *next;
} car_p;

//停车场初始化
car_p *init_parking_stack()
{
    car_p *head = (car_p *)malloc(sizeof(car_p));
    head->next = NULL;
    return head;
}

//停车场备份栈
car_p *init_parking_stack_spare(int n)
{
    car_p *head_spare = (car_p *)malloc(sizeof(car_p));
    head_spare->next = NULL;
    car_p *temp = head_spare;

    int i = 0;
    for (i = 0; i < n; i++)
    {
        car_p *new_ptr = (car_p *)malloc(sizeof(car_p));
        new_ptr->data = -1;
        new_ptr->next = NULL;
        temp->next = new_ptr;
        temp = new_ptr;
    }
    return head_spare;
}

//返回值表示停车场目前内部车辆数
int paring_nums(car_p *head)
{
    car_p *temp = head->next;
    int i = 0;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    return i;
}

//车辆入栈
car_p *ins_parking_stack(car_p *head)
{
    car_p *temp = head;
    int new_num;
    if (car_num == MAX)
    {
        printf("parking lot is full\n");
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        car_p *new_node = (car_p *)malloc(sizeof(car_p));
        printf("input the number of new parking car\n");
        scanf("%d", &new_num);
        new_node->data = new_num;
        car_num++;
        new_node->next = NULL;
        temp->next = new_node;
        temp = new_node;
    }
    return head;
}

//指定号牌的车辆出栈
car_p *pop_parking_stack(car_p *head, int old_num, car_p *head_spare)
{
    //用于在链表内遍历搜索
    car_p *temp = NULL;
    //temp_ahead 作为 temp节点的前置节点
    //主要用于针对队尾最后一元素去除时将链表正常截断
    car_p *temp_ahead = head;
    //判断链表是否为空，并找到首元节点
    if (head->next != NULL)
    {
        temp = head->next;
    }
    else
    {
        printf("The parking lot is already empty\n");
        return head;
    }

    //在停车栈内部搜索指定车牌, temp_park用于临时记录匹配时的车辆位置
    car_p *temp_park = NULL;
    //temp_spare用于指定备用栈的遍历
    car_p *temp_spare = head_spare->next;
    //num_spare用于记录需要挪出多少车辆
    int num_spare = 0;
    int i;

    while (temp != NULL)
    {
        //若匹配到指定车牌, 记下对应位置
        if (temp->data == old_num)
        {
            temp_park = temp;
            break;
        }
        temp = temp->next;
        temp_ahead = temp_ahead->next;
    }
    //若此时temp为NULL，说明遍历全栈都没有找到车辆；
    //若temp不为NULL，则可将temp_park位置之后的车辆信息备份到另一个栈
    if (temp == NULL)
    {
        printf("there is no such car in the parking lot\n");
    }
    else
    {
        //将车辆挪到备份栈
        while (temp_park != NULL)
        {
            temp_spare->data = temp_park->data;
            temp_spare = temp_spare->next;
            temp_park = temp_park->next;
            num_spare++;
        }
        //除去备份栈的首位车，重新送回停车栈
        temp_spare = head_spare->next->next;
        num_spare = num_spare - 1; //因为移回的时候无需考虑本就要离开车场的首位车

        for (i = num_spare; i > 0; i--)
        {
            temp->data = temp_spare->data;
            temp_ahead = temp_ahead->next;
            temp = temp->next;
            temp_spare = temp_spare->next;
        }
        //移除停车栈链表中上一次遗留的最后一个节点位
        //不仅需要free掉当前指针位，
        //还需要将其前置节点的指针置为NULL，即将链表截断
        temp_ahead->next = NULL;
        free(temp);
        car_num--;  //将当前停车栈内的车辆数减一
    }
    return head;
}

//展示目前停车场内的车辆停放情况
void disp_parking_lot(car_p *head)
{
    car_p *temp = head->next;
    printf("the parking lot are now:\n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    car_p *head = init_parking_stack();
    car_p *head_spare = init_parking_stack_spare(MAX);
    head = ins_parking_stack(head);
    head = ins_parking_stack(head);
    head = ins_parking_stack(head);
    head = ins_parking_stack(head);
    disp_parking_lot(head);
    head = pop_parking_stack(head, 111, head_spare);
    disp_parking_lot(head);
    head = pop_parking_stack(head, 333, head_spare);
    disp_parking_lot(head);
    return 0;
}