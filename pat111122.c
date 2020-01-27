#include<stdio.h>>
void main()
{
    int i,j,n;
    printf("Enter the row size");
    scanf("%d",&n);
    i=1;j=1;
    while(i<=n)
    {
        printf("%d",i);
        if(j==n)
        {
            printf("\n");
            j=0;
            i++;
        }
        j++;
    }
}
