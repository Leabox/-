#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int deletech (char *arr)

{
     char *front, *rear;
     front = rear =arr;
     while (*front == '*')
     {
         front++;
     }
     while (*rear !='\0')
     {
         rear++;
     }
     rear--;
     while(*rear =='*')
     {
         rear--;
     }
     int i,j;
     for (i=0,j=0;&front[i] < rear;i++)
     {
         if(front[i] !='*')
         {
             front[j] =front[i];
             j++;
         }
     }
     for (i = 0;rear[i];i++,j++)
     {
         front[j] = rear[i];
     }
     front[j] = '\0';
     return 0;
}

int main()
{
    char s[20];
    scanf("%s",s);
    deletech(s);
    printf("\nÉ¾³ý*£º%s",s);
    while(1);
    getchar();
    return 0;
}
