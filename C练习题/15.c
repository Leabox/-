#include <stdio.h>
#include <stdlib.h>

int main()
{
    //����һ
    //���������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��
    //60-89�ֵ�ͬѧ��B��ʾ��60�����µ���C��ʾ
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
�ڶ��ַ��� ��Ŀ����
int main()
{
    int score;
    char grade;
    printf("����������� ");
    scanf("%d",&score);
    grade=(score>=90)?'A':((score>=60)?'B':'C');
    printf("%c\n",grade);
    return 0;
}
*/
