#include<stdio.h>
void main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d square is %d\t ",i,i*i);
        printf("%d cube is %d\n",i,i*i*i);
        i++;
    }
}
