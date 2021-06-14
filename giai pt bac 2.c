#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,delta,x,x1,x2;
    printf("nhap a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    if (a==0)printf("ERROR!");
    else
    {
        delta=pow(b,2)-4*a*c;
        if (delta<0)printf("vo nghiem");
        else
            if(delta==0)
            {
                x=(-b)/(2*a);
                printf("x=%.3f",x);
            }
            else
            {
                x1=(-b+sqrt(delta))/(2*a);
                x2=(-b-sqrt(delta))/(2*a);
                printf("x1=%f\nx2=%f",x1,x2);
            }
    }
}
