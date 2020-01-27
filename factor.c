#include<stdio.h>
void main()
{
    int n,i=1,c=0;
    printf("Enter a number : ");
    scanf("%d",&n);

        while(i<=n)
        {
            if(n%i==0)
            {
                printf("%d  ",i);
                c+=1;
            }
            i++;
        }

    c==2?printf("\nprime"):printf("\ncomposite ");
}
