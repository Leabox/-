#include <stdio.h>
#include <stdlib.h>
//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
int main()
{
    /*����һ���ַ�����ε��������ͳ��
    char push;
    int kong = 0,zi = 0,space = 0,others = 0;
    printf("������һЩ�ַ���");
    push = getchar();
    switch(push);
    */
    //����һ�ξͼ�¼�ж�һ��
    char push;
    int math = 0,zi = 0,space = 0,others = 0;
    printf("������һЩ�ַ���");
    while((push=getchar()) !='\n')
    {

        if((push >= 'a' && push <= 'z') || ( push>='A' && push <= 'Z'))
            zi++;
        else if(push >='0' && push<='9')
            math++;
        else if(push = ' ')
            space++;
        else
            others++;
    }
    printf("��ĸ=%d������=%d���ո�=%d������=%d",zi,math,space,others);
    return 0;
}
