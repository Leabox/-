#include <stdio.h>
#include <stdlib.h>
//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。
int main()
{
    /*卡在一串字符串如何单独拎出来统计
    char push;
    int kong = 0,zi = 0,space = 0,others = 0;
    printf("请输入一些字符：");
    push = getchar();
    switch(push);
    */
    //输入一次就记录判断一次
    char push;
    int math = 0,zi = 0,space = 0,others = 0;
    printf("请输入一些字符：");
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
    printf("字母=%d，数字=%d，空格=%d，其他=%d",zi,math,space,others);
    return 0;
}
