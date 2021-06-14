// cách viết thứ 1
/* #include<stdio.h>
void main()
{
    float a,b,x;
    printf("nhap a,b=");
    scanf("%f %f",&a,&b);
    if (a==0)
    {
        if (b==0 )printf("phuong trinh co vo so nghiem");
        else printf("phuong trinh vo nghiem");
    }
    else

         printf("phuong trinh co nghiem x=%.3f",x=(-b)/a);
} */
// cách viết thứ 2
#include<stdio.h>
void main()
{
    float a,b,x;
    printf("nhap a,b");
    scanf("%f %f",&a,&b);
    x=(-b)/a;
    if ((a==0)&&(b==0)) printf("phuong trinh co vo so nghiem");
    else
    {
        if ((a==0)&&(b!=0))printf("phuong trinh vo nghiem");
        else printf("phuong trinh co nghiem x=%.3f",x);
    }
}
