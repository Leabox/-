#include <stdio.h>
#include <stdlib.h>

int main()
{
//��s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�
//����2+22+222+2222+22222(��ʱ����5�������)������������м��̿��ơ�
    int s=0,a,n,t;
    printf("������ a �� n��\n");
    scanf("%d%d",&a,&n);
    t=a;
    while(n>0)
    {
        s+=t;
        a=a*10;
        t+=a;
        n--;
    }
    printf("a+aa+...=%d\n",s);
    return 0;
}
