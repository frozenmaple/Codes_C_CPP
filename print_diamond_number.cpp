//打印数字菱形

#include <stdio.h>

int main()
{
    int i, j, n, k; //i是行数；j是列数；n是输入数字；k用于循环
    printf("Please input n: ");
    scanf("%d", &n);
    printf("Output:\n");

    //上半部分
    for (i = 1; i <= n; i++)
    {
        //打印上半部分当前行的开头的空格部分
        for (j = 1; j < n + 1 - i; j++)
            printf(" ");

        //打印当前行的数字升序部分
        for (k = 1; k < i; k++)
            printf("%d", k);
        //打印当前行的数字降序部分
        for (k = i; k > 0; k--)
            printf("%d", k);

        printf("\n");
    }

    //下半部分
    for (i = n + 1; i <= 2 * n - 1; i++)
    {
        //打印下半部分当前行的开头的空格部分
        for (j = i - n; j > 0; j--)
            printf(" ");

        //打印当前行的数字升序部分
        for (k = 1; k <= 2 * n - i; k++)
            printf("%d", k);
        //打印当前行的数字降序部分
        for (k = 2 * n - i - 1; k > 0; k--)
            printf("%d", k);
        printf("\n");
    }

    return 0;
}
