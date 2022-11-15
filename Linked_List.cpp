/*
** Linked_List.c for linked link example in c:\Users\froze\Documents\C Codes
**
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  undefined Jun 16 下午2:09:58 2019 frozenmaple
** Last update Fri Jun 27 下午2:34:10 2019 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#define Size 5
#define set_loc 1

typedef struct Link
{
    int element;       //data part, here is only for one number
    struct Link *next; //pointer part, here point to the next node
} link;

//link list initialize
//n: total number of list
link *link_init(int n);

void link_disp(link *p);

//add value to link list
//ele: value to be inserted
//loc: position to be inserted
link *link_add(link *p, int ele, int loc);

//del value from link list
//loc: position to be delteted
link *link_del(link *p, int loc);

//search value within link list
//return exact position, if element is found
//return -1, if element is found
int link_loc(link *p, int element);

//amend the link list at desired position with new value
link *link_ame(link *p, int loc, int new_element);

int main()
{
    link *list_ptr = link_init(Size);
    link_disp(list_ptr);
    list_ptr = link_add(list_ptr, 6, 1);
    link_disp(list_ptr);
    list_ptr = link_del(list_ptr, 5);
    link_disp(list_ptr);
    int j = link_loc(list_ptr, 5);
    if (j != -1)
    {
        printf("wanted element is %dth position\n", j);
    }
    else
    {
        printf("element is not found\n");
    }
    list_ptr = link_ame(list_ptr, 4, 10);
    link_disp(list_ptr);
    return 0;
}

link *link_init(int n)
{
    link *head = (link *)malloc(sizeof(link)); //set up a head pointer
    link *ptr = head;                          //set up a moving ptr
    int i;
    for (i = 0; i < n; i++)
    {
        link *temp = (link *)malloc(sizeof(link)); //set up the next node
        temp->element = i + 1;
        temp->next = NULL; //set this as the final node at this stage
        ptr->next = temp;  //set link relation with previous node
        ptr = temp;        //let ptr pointer move forward
    }
    return head;
}

void link_disp(link *p)
{
    int i;
    link *temp = p;
    printf("The list now is: ");
    while (temp->next != NULL)
    {
        printf("%d ", temp->next->element);
        temp = temp->next;
    }
    printf("\n");
}

link *link_add(link *p, int ele, int loc)
{
    int i;
    link *temp = p;

    //set temp points to the desired node
    for (i = 1; i < loc; i++)
    {
        if (temp->next == NULL)
        {
            printf("wrong location\n");
            exit(1);
        }
        temp = temp->next;
    }

    link *new_ele = (link *)malloc(sizeof(link));
    new_ele->element = ele;
    new_ele->next = temp->next;
    temp->next = new_ele;
    return p;
}

link *link_del(link *p, int loc)
{
    link *temp = p;
    int i;

    //set temp points to the desired node
    for (i = 1; i < loc; i++)
    {
        if (temp->next == NULL)
        {
            printf("wrong location\n");
            exit(1);
        }
        temp = temp->next;
    }

    //save temporated node address for further free()
    link *del = temp->next;
    temp->next = temp->next->next;

    //since del is local variable, here no need to set del to 'NULL'
    free(del);
    return p;
}

int link_loc(link *p, int element)
{
    link *temp = p->next;
    int i = 1;
    while (temp != NULL)
    {
        if (temp->element == element)
        {
            return i;
        }
        temp = temp->next;
        i++;
    }
    return -1;
}

link *link_ame(link *p, int loc, int new_element)
{
    link *temp = p;
    int i;
    for (i = 0; i < loc; i++)
    {
        if (temp->next != NULL)
        {
            temp = temp->next;
        }
        else
        {
            printf("wrong location\n");
            exit(1);
        }
    }
    temp->element = new_element;
    return p;
}