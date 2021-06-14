#include<stdio.h>
void main()
{
    int i,n;
    printf("nhap so tu nhien n\n");
    scanf("%d",&n);
    printf("uoc cua n la\n");
    for(i=1;i<=n;i++)
    {
        if (n%i==0)
           printf("%d ",i);
    }

}
