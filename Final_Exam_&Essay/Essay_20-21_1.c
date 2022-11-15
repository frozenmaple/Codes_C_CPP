/*
** Essay_20-21_1.c for Essay 2020-2021_semester_1 in d:\Dropbox\我的坚果云\Codes\C_Lang
** Choosen from C Primer Plus Chapter 13 Questions 7
** Made by frozenmaple
** Login   <frozenmaple>
**
** Started on  Tue Jun 16 上午9:50:14 2020 frozenmaple
** Last update Thu Jun 17 上午9:28:12 2020 frozenmaple
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LINE_SIZE 256

int main(int argc, char *argv[])
{
    char *line_one = (char *)malloc(LINE_SIZE * sizeof(char));
    char *line_two = (char *)malloc(LINE_SIZE * sizeof(char));

    int first_end = 1;

    /*
    //即命令行参数不等于3时的错误捕获处理，正常应该是“程序本身+文件名1+文件名2”
    if (argc != 3)
    {
        fprintf(stderr, "Usage:%s filename1 filename2\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    */

    //定义两个文件流指针，同时对其进行文件打开检测
    FILE *fp1, *fp2;
    //if ((fp1 = fopen(argv[1], "r")) == NULL)
    if ((fp1 = fopen("text1.txt", "r")) == NULL)
    {
        fprintf(stderr, "Open %s failed\n", "text1.txt");
        exit(EXIT_FAILURE);
    }
    //if ((fp2 = fopen(argv[2], "r")) == NULL)
    if ((fp2 = fopen("text2.txt", "r")) == NULL)
    {
        fprintf(stderr, "Open %s failed\n", "text2.txt");
        exit(EXIT_FAILURE);
    }

    printf("Print the line one by one\n");

    int i = 1;
    while (fgets(line_one, LINE_SIZE, fp1) != NULL)
    {
        if (fgets(line_two, LINE_SIZE, fp2) != NULL)
        {
            printf("File 1 LINE NO.%d : %s", i, line_one);  //循环语句里的fgets已经把文本文件里每行有的换行符给读进来了，所以此处不再需要
            printf("File 2 LINE NO.%d : %s", i, line_two);
            i++;
        }
        else
        {
            printf("File 1 LINE NO.%d : %s", i, line_one);
            i++;
        }
    }

    while (fgets(line_two, LINE_SIZE, fp2) != NULL)
    {
        printf("File 2 LINE NO.%d : %s", i, line_two);
        i++;
    }

    fclose(fp1);
    fclose(fp2);

    return 0;
}
