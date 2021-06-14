#include<stdio.h>
void main()
{
    int N,i,j,a[100],trung_gian;
    printf("N= ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(j=N;j>=2;j--)
        for(i=1;i<=j-1;i++)
            if(a[i]>a[i+1])
            {
                trung_gian=a[i];
                a[i]=a[i+1];
                a[i+1]=trung_gian;
            }
    for(i=1;i<=N;i++)
        printf("%d ",a[i]);
}
