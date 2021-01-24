#include <stdio.h>
#include <stdlib.h>

int main()
{
    //方法一
    //利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，
    //60-89分的同学用B表示，60分以下的用C表示
    int a;
    scanf("%d",&a);
    if(a>=90)
    {
        printf("A");
    }
    else if(a>=60)
        printf("B");
    else
        printf("C");

    return 0;
}
/*
第二种方法 三目运算
int main()
{
    int score;
    char grade;
    printf("请输入分数： ");
    scanf("%d",&score);
    grade=(score>=90)?'A':((score>=60)?'B':'C');
    printf("%c\n",grade);
    return 0;
}
*/
