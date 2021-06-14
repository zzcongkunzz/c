#include<stdio.h>
void main()
{
    int N,i=1,j,a[5],tong=0;
    printf("N=");
    scanf("%d",&N);
    while(N>0)
    {
        a[i]=N%10;
        N=N/10;
        i++;
    }
    for(j=i-1;j>0;j--)
        tong=tong+a[j];
    printf("tong cac chu so la:%d ",tong);
}
