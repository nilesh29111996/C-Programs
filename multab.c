#include<stdio.h>
void main()
{
    int a,b,i=1;
    printf("enter 2 numbers in which between u want multiplication tables  ");
    scanf("%d %d",&a,&b);
    if(a>b)
        b=(a+b)-(a=b);
    while(a<=b)
    {
        if(i<=10)
        {
        printf("%d * %d = %d\n",a,i,a*i);
        i++;
        }
    else
    {


        a++;
        i=1;
        printf("\n");
    }
}}
