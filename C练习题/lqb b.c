#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    long long x,m,n;
    x=1;
    m=1;
    n=1;
    int i,d;
    for(i=1;i<5;i++)
    {
        x = x+m+n;
        m = m+n+x;
        n = n+x+m;
    }
    printf("%lld",m);
    return 0;
}
*/
int main(){
    int a,b,c,d;
    int i;
    a = 1;
    b = 1;
    c = 1;
    for(i=3;i<20190324;i++)
    {
        d=(a+b+c)%10000;
        a=b;
        b=c;
        c=d;
    }
    printf("%d",d);
return 0;
}
