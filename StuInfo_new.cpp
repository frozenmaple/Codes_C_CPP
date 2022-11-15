#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
//学生信息数组最大长度
#define MAXSIZE 100

//定义学生信息结构体
struct student
{
    int num; //student number
    char name[15];
    int grade;
};

struct sqlist
{                                  //define the sequence list structure
    struct student r[MAXSIZE + 1]; //存储顺序表的向量
    int length;                    //顺序表的长度
    int sorted;                    //数组r中的学号数据(num)是否有序标志
};
typedef struct sqlist SqList;

void menu();
void input(SqList *stuList);
void insert(SqList *stuList);
void SortbyNum(SqList *stuList);
void SortbyGrade(SqList *stuList);
void output(SqList *stuList);
void QSort(SqList *L, int low, int high);
int Partition(SqList *L, int low, int high);
void SearchByNum(SqList *stuList);

//显示主菜单函数
void menu()
{
    printf("********Student Management System*******\n");
    printf("1.Input student information\n");
    printf("2.Display student information\n");
    printf("3.Insert student information\n");
    printf("4.Delete student information\n");
    printf("5.Revise student information\n");
    printf("6.Sort by number\n");
    printf("7.Sort by grade\n");
    printf("8.Search by number\n");
    printf("0.exit\n");
    printf("Please input your choice：");
}

//录入学生信息函数
void input(SqList *stuList)
{
    int i;
    printf("Please input student information:\n");
    i = stuList->length + 1;
    while (1)
    {
        if (stuList->length >= MAXSIZE)
        {
            printf("storage space full!!\n");
            break;
        }
        printf("input student number(-1 means end of the input)\n");
        scanf("%d", &stuList->r[i].num);
        if (stuList->r[i].num == -1)
            break;
        printf("input student's name：");
        scanf("%s", stuList->r[i].name);
        printf("input student's grade：");
        scanf("%d", &stuList->r[i].grade);
        i++;
        stuList->length++; //顺序表有效长度增加
        stuList->sorted = FALSE;
    }
}

//显示学生信息函数
void output(SqList *stuList)
{
    int i;
    printf("--------------------------------------------------------\n");
    printf("\tStudent Information\n");
    printf("--------------------------------------------------------\n");
    printf("Number\tName\tGrade\n");
    printf("--------------------------------------------------------\n");
    for (i = 1; i <= stuList->length; i++)
        printf("%-8d%-8s%-8d\n", stuList->r[i].num, stuList->r[i].name, stuList->r[i].grade);
    printf("--------------------------------------------------------\n");
    printf("Total number of student is: %d\n", stuList->length);
}

//插入学生信息函数
void insert(SqList *stuList)
{
    int i, index;
    printf("Please input the position to insert a new student:");
    scanf("%d", &index);
    if (index > stuList->length + 1 || index < 1) //插入位置检查是否合理
    {
        printf("Incorrect index, insertion failed!\n");
        return;
    }
    if (stuList->length + 1 > MAXSIZE) //插入数据后长度是否超过数组最大值
    {
        printf("storage space full!\n");
        return;
    }
    for (i = stuList->length; i >= index; i--) //从最后一个元素开始，依次后移，为插入位置腾出一个空位
    {
        stuList->r[i + 1] = stuList->r[i];
    }
    printf("input student number\n");
    scanf("%d", &stuList->r[index].num);
    printf("input student's name：");
    scanf("%s", stuList->r[index].name);
    printf("input student's grade：");
    scanf("%d", &stuList->r[index].grade);
    stuList->length++;
    stuList->sorted = FALSE;
}

//按学号排序函数
void SortbyNum(SqList *stuList)
{
    //Insertion sort

    stuList->sorted = TRUE;
}

//快速排序中用于一趟排序的函数（对从low到high范围内的数据进行划分）
//小于pivotkey的元素被移到其左边，大于pivotkey的元素被移到其右边
//返回枢纽元pivotkey的位置
int Partition(SqList *L, int low, int high)
{
    int pivotkey;
    L->r[0] = L->r[low];
    pivotkey = L->r[low].grade;
    while (low < high)
    {
        while (low < high && L->r[high].grade >= pivotkey)
            --high;
        L->r[low] = L->r[high];
        while (low < high && L->r[low].grade <= pivotkey)
            ++low;
        L->r[high] = L->r[low];
    }
    L->r[low] = L->r[0];
    return low;
}

//完整的快速排序函数，对从low到high范围内的数据进行排序
//通过调用Partition函数实现一趟划分
//并通过递归调用实现对枢纽元左右两边的子序列的排序
void QSort(SqList *L, int low, int high)
{
    int pivotloc; //存放枢纽元pivotkey的位置
    if (low < high)
    {
        pivotloc = Partition(L, low, high); //通过调用Partition函数实现一趟划分
        QSort(L, low, pivotloc - 1);        //通过递归调用实现对枢纽元左边的子序列的排序
        QSort(L, pivotloc + 1, high);       //通过递归调用实现对枢纽元右边的子序列的排序
    }
}

//按成绩排序函数
void SortbyGrade(SqList *stuList)
{
    //Quick sort
    QSort(stuList, 1, stuList->length);
}

//按学号查找函数
void SearchByNum(SqList *stuList)
{
    int low, high, mid;
    int search_Num = 0;

    if (stuList->sorted == FALSE) //尚未按照学号排序，无法用binary search
    {
        printf("Please sort the student number!\n");
        return;
    }
    printf("Please input the student number:");
    scanf("%d", &search_Num);
    //binary search
    low = 1;
    high = stuList->length;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (search_Num == stuList->r[mid].num)
        {
            printf("Search successful!\n");
            printf("Number\tName\tGrade\n");
            printf("--------------------------------------------------------\n");
            printf("%-8d%-8s%-8d\n", stuList->r[mid].num, stuList->r[mid].name, stuList->r[mid].grade);
            return;
        }
        else if (search_Num < stuList->r[mid].num)
            high = mid - 1;
        else
            low = mid + 1;
    }
}

//主函数
int main()
{
    SqList stuList;
    stuList.length = 0;
    stuList.sorted = FALSE;
    int sel;
    while (1)
    {
        menu();
        scanf("%d", &sel);
        switch (sel)
        {
        case 1:
            system("cls");
            input(&stuList); //注意第二个参数为指针，在函数中可修改数组有效长度
            break;
        case 2:
            system("cls");
            output(&stuList);
            break;
        case 3:
            system("cls");
            insert(&stuList);
            output(&stuList);
            break;
        case 4:
            system("cls");

            break;
        case 5:
            system("cls");

            break;
        case 6:
            system("cls");

            break;
        case 7:
            system("cls");
            SortbyGrade(&stuList);
            output(&stuList);
            break;
        case 8:
            system("cls");
            SearchByNum(&stuList);
            break;
        case 0:
            exit(0); //程序直接退出
        default:
            system("cls");
        }
    }
    return 0;
}
