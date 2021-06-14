#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    printf("nhap 3 so a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    d=(a+b+c)/2;
    printf("dien tich tam giac abc:%.3f",sqrt(d*(d-a)*(d-b)*(d-c)));
    return 0;
}
