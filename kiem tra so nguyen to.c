#include<stdio.h>
void main()
{
    int i,a,dem=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
        if(a%i==0)
            dem++;
    if(dem==2)
        printf("la so nguyen to");
    else
        printf("khong la so nguyen to");
}
