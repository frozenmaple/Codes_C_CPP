/*
** Linked Queue.c for 链队列 in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Thu Jul 17 下午3:16:11 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_size 4

/*
本程序中并未单独指明front和rear指针变量
 */
//define Linked Queue Type
typedef struct Linked_Queue
{
    int data;
    struct Linked_Queue *next;
} ln_queue;

//initialize one empty link queue, only has one head node
ln_queue *ini_ln_queue();

//put new value into the link queue
ln_queue *ins_ln_queue(ln_queue *head, int new_ele);

//outcast top old value outside the link queue
ln_queue *del_ln_queue(ln_queue *head);

//display the whole link queue
void disp_ln_queue(ln_queue *head);

int main()
{
    ln_queue *head = ini_ln_queue();
    head = ins_ln_queue(head, 1);
    head = ins_ln_queue(head, 2);
    head = ins_ln_queue(head, 3);
    disp_ln_queue(head);
    head = del_ln_queue(head);
    head = del_ln_queue(head);
    head = del_ln_queue(head);
    disp_ln_queue(head);
    head = del_ln_queue(head);
    return 0;
}

ln_queue *ini_ln_queue()
{
    ln_queue *head;
    head = (ln_queue *)malloc(sizeof(ln_queue));
    head->next = NULL;
    return head;
}

ln_queue *ins_ln_queue(ln_queue *head, int new_ele)
{
    ln_queue *temp = (ln_queue *)malloc(sizeof(ln_queue));
    temp->data = new_ele;
    temp->next = NULL;
    //搜到目前head指定链队列的最后队尾结点
    ln_queue *rear = head;
    while (rear->next != NULL)
    {
        rear = rear->next;
    }
    rear->next = temp;
    rear = temp;
    return head;
}

ln_queue *del_ln_queue(ln_queue *head)
{
    //找到首元节点
    ln_queue *temp = head->next;
    if (temp == NULL)
    {
        printf("the queue is already empty\n");
    }
    else
    {
        printf("the old_ele %d is removed from the queue\n", temp->data);
        head->next = temp->next;
        free(temp);
        temp = NULL;
    }
    return head;
}

void disp_ln_queue(ln_queue *head)
{
    ln_queue *temp = head->next;
    printf("The link queue are: ");
    while (temp!= NULL) 
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}