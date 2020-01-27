#include<stdio.h>
void main()
{
    int i,j,n;
    printf("enter size of row  :  ");
    scanf("%d",&n);
    i=1;j=1;
    while(i<=n)
    {
        if(j<=n)
        {
            printf("%d%d ",i-1,j-1);
            j++;
        }
        else
        {
           printf("\n");
           i++;
           j=1;
        }
    }
}
