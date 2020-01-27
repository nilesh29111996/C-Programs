#include<stdio.h>
void main()
{
    int a,num,e,s=1,t,d,c=0;
    printf("Enter number");
    scanf("%d",&num);
    e=printf("%d",num);
    t=num;
    a=e;
    while(num!=0)
    {
        d=num%10;
        a=e;
        s=1;
        while(a)
        {
            s*=d;
            a--;
        }
        c+=s;
        num/=10;
    }
    t==c?printf(" is Armstrong"):printf(" is not Armstrong");
}
