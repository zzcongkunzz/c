#include<stdio.h>
void main()
{
    int N,i,a[1000],min,max;
    printf("nhap N= ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d ",&a[i]);
    }
    min=max=a[1];
    for(i=1;i<=N;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("so lon nhat la:%d ",max);
    printf("\nso nho nhat la: %d ",min);
}

