#include<stdio.h>
void main()
{
    int i,n;
    for(n=1;n<=9;n++)
    {
        for(i=n;i<=9*n;i=i+n)
            if(i<10)
                printf("%d  ",i);
            else
                printf("%d ",i);
        printf("\n");
    }
}

