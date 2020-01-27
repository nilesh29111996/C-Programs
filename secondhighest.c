#include<stdio.h>
void main()
{
    int n,s,a,b,c,e;
    printf("Enter 3 digit number ");
    scanf("%3d",&n);
    c=n%10;
    b=(n/10)%10;
    a=n/100;
    if(b<c)
    {
        c=(b+c)-(b=c);
        s=(a*100+b*10+c);
    }
    else if(a<b && b>c && a<c)
    {
        e=b;b=a;a=c;c=e;
        s=(a*100+b*10+c);
    }
    else if(a<b && b>c)
    {
        e=a;a=b;b=c;c=e;
        s=(a*100+b*10+c);
    }

    else
    {
        s=n;
    }
    printf("Next highest number for %d is %d",n,s);
}
