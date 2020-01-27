#include<stdio.h>
void main()
{
    int unit,ph;
    float sc,pt,amt,tamt;
    char type;
    printf("\n\n\t\t 1.DOMESTIC \n");
    printf("\t\t 2.COMMERCIAL \n");
    printf("Enter the type(D/d/c/C)");
    scanf("%c",&type);
    if(type!='d' && type!='D' && type!='C' && type!='c')
    {
        printf("Invalid type");
        return;
    }
    printf("Enter the units");
    scanf("%d",&unit);
    printf("Enter the phase");
    scanf("%d",&ph);
    if(ph!=1 && ph!=3)
    {
        printf("Invalid type");
        return;
    }
    if(type=='D' || type=='d')
    {
        if(unit<=50)
            amt=unit*1.45;
        else if(unit<=100)
            amt=(50*1.45)+((unit-50)*2.85);
        else if(unit<=200)
            amt=(50*1.45)+(50*2.85)+((unit-100)*3.95);
        else
            amt=(50*1.45)+(50*2.85)+(100*3.95)+((unit-200)*4.50);
        sc=10.00;
        pt=0.06*unit;
        if(ph==1)
        {
            if(pt<20)
                pt=20;
        }
        else
        {
            if(pt<50)
                pt=50;
        }

    }
    else
    {
        if(unit<=100)
            amt=unit*3.95;
        else
            amt=(100*3.95)+((unit-100)*7.00);
        sc=20.00;
        pt=0.06*unit;
        if(ph==1)
            {
                if(pt<50)
                    pt=50;
            }
        else
        {
            if(pt<100)
                pt=100;
        }
    }
    tamt=amt+sc+pt;
    printf("\n Purpose(C-Commercial,D-Domestic):%c",type);
    printf("\n Total no of units:%d",unit);
    printf("\n Phase type:%d",ph);
    printf("\n Bill amount: %.2f",amt);
    printf("\n Service Charge%.2f",sc);
    printf("\n Power Tax:%.2f",pt);
    printf("\n Total Bill Amount:%.2f",tamt);
}
