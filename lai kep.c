#include<stdio.h>
#include<math.h>
int main()
{
   // lai kep
    float sotiengui,laisuat;
    int sothang;
    printf("sotiengui,laisuat,sothang");
    scanf("%f %f %d",&sotiengui,&laisuat,&sothang);
    printf("so tien nhan dc la: %f",sotiengui*pow((1+laisuat),sothang));
    return 0;//pow(a,b)=a^b
}
