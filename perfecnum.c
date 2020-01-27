#include<stdio.h>
void main()
{
    int a=2,s=1,t,c=1,d=0,b;
    while(a<=100)
    {
        s+=a;
        //a=a*2;
        while(c<=s)
        {
            if(s%c==0)
            {
                d+=1;
            }
            c++;
        }
        c=1;
        if(d==2)
        {
            b=s*a;
            if(b<1000)
            {
            printf("%d is perfect num\n",b);
            }

        }
        d=0;

        a=a*2;

    }
}

