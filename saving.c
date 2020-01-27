#include<stdio.h>
void main()
{
     float sal,shtamt,balamt;
     int sh;
     printf("enter salary amount");
     scanf("%f",&sal);
     if(sal>8000)
     {
        printf("salary too large");
        return;
     }
     else if(sal<=0)
     {
        printf("salary too small");
        return;
     }
     else
     {
        printf("enter shifts count");
        scanf("%d",&sh);
        if(sh<=0)
        {
            printf("shifts too small");
            return;
        }
        else
            shtamt=sh*(2*sal/100);
     }
     balamt=sal-(50*sal/100)+shtamt;
     printf("savings of salary is %g/rs",balamt);

}
