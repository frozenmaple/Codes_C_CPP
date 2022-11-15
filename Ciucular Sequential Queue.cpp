/*
** Ciucular Sequential Queue.c for 顺序队列 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Sat Jul 12 下午4:26:50 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_size 4

//insert new_ele into the end of ciucular sequential queue
//return rear ptr
int ins_cir_seq_queue(int *data, int front, int rear, int new_ele);

//remove old_ele from the head of sequential queue
//return front ptr
int del_cir_seq_queue(int *data, int front, int rear);

//display the circular sequential queue
void disp_cir_seq_queue(int *data, int front, int rear);

int main()
{
    int data[max_size] = {0};
    int front, rear;
    front = rear = 0;
    rear = ins_cir_seq_queue(data, front, rear, 1);
    rear = ins_cir_seq_queue(data, front, rear, 2);
    rear = ins_cir_seq_queue(data, front, rear, 3);
    disp_cir_seq_queue(data, front, rear);
    front = del_cir_seq_queue(data, front, rear);
    disp_cir_seq_queue(data, front, rear);
    rear = ins_cir_seq_queue(data, front, rear, 4);
    front = del_cir_seq_queue(data, front, rear);
    disp_cir_seq_queue(data, front, rear);
    rear = ins_cir_seq_queue(data, front, rear, 5);
    front = del_cir_seq_queue(data, front, rear);
    disp_cir_seq_queue(data, front, rear);
    front = del_cir_seq_queue(data, front, rear);
    disp_cir_seq_queue(data, front, rear);
    front = del_cir_seq_queue(data, front, rear);
    disp_cir_seq_queue(data, front, rear);
    front = del_cir_seq_queue(data, front, rear);
    return 0;
}

int ins_cir_seq_queue(int *data, int front, int rear, int new_ele)
{
    //循环队列满的条件是 (rear+1)%QueueSize == front
    if ((rear + 1) % max_size == front)
    {
        printf("the queue is already full\n"); //the last element of array is reserved
    }
    else
    {
        data[rear] = new_ele;
        //如果rear超过max_size，则直接将其从data[0] 重新开始存储
        rear = (rear + 1) % max_size;
    }
    return rear;
}

void disp_cir_seq_queue(int *data, int front, int rear)
{
    int i;
    /*
    从front头指针开始遍历元素，注意i递增时需要和max_size求余，以便超过后直接从0再次开始
    这样可以有效对应rear指针比front指针小的问题
    （由于多次出入队列，造成头尾指针位置不再有严格的先后大小关系）
    */
    for (i = front; i != rear; i = (i + 1) % max_size)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    printf("front and rear are now %d and %d.\n", front, rear);
}

int del_cir_seq_queue(int *data, int front, int rear)
{
    if (front == rear)
    {
        printf("the queue is already empty\n");
    }
    else
    {
        //如果front超过max_size，则直接将其从data[0] 重新开始存储
        front = (front + 1) % max_size;
    }
    return front;
}
