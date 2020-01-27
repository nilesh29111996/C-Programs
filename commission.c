#include<stdio.h>
void main()
{
    char type;
    float salamt,comm;
    printf("\n\n\t\t  1.CPU\n");
    printf("\t\t  2.MONITOR\n");
    printf("Enter the type(C/c/M/m): ");
    scanf("%c",&type);
    if(type!='C' && type!='c' && type!='M' && type!='m')
    {
        printf("Invalid type");
        return;
    }
    printf("Enter sales amount: ");
    scanf("%f",&salamt);
    if(type=='c' || type=='C')
    {
        if(salamt<10000)
            printf("commission is nill");
        else if(salamt>=10000 && salamt<25000)
        {
            comm=8*salamt/100;
            printf("commission amount is %g",comm);
        }
        else
        {
            comm=2000;
            comm+=10*(salamt-25000)/100;
            printf("commission amount is %g",comm);
        }
    }
    else
    {
        if(salamt<10000)
            printf("commission amount is %g",5*salamt/100);
        else
        {
            comm=500;
            comm+=8*(salamt-10000)/100;
            printf("commission amount is %g",comm);
        }
    }
}
