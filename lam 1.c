#include<stdio.h>
#include<math.h>

int nt(long x)
{
    long k;
    int d,nt2;
    if ((x==0)||(x==1)) nt2=0;
    else if (x%2==0) nt2=0;
    else if (x%3==0) nt2=0;
    else if (x%5==0) nt2=0;
    else if (x%7==0) nt2=0;
    else {
        d=0;
        for (k=1;k<=sqrt(x);k++) if (x%k==0) d=d+1;
        if (d==1) nt2=1;
            else nt2=0;
        if (x==1) nt2=0;
    }
    if ((x==2)||(x==3)||(x==5)||(x==7)) nt2=1;
    return(nt2);
}

int so_lan_chia_het(long x,long so_bi_chia,int slch)
{
    if(x%so_bi_chia==0)
    {
        slch++;
        so_lan_chia_het(x/so_bi_chia,so_bi_chia,slch);
    }
    else
    {
        return(slch);
    }

};

int main()
{
    long i,n;

    printf("Phan tich thua so nguyen to\nNhap 1 so nguye duong n\nn=");
    scanf("%d",&n);

    printf("\n%d=",n);

    for(i=1;i<=n;i++)
        if(nt(i))
        if(n%i==0)
        {
            if(so_lan_chia_het(n,i,0)==1)
                printf(" %d *",i,so_lan_chia_het(n,i,0));
            else
            {
                printf(" %d^%d *",i,so_lan_chia_het(n,i,0));
            }

        }
    printf(" %d",1);
    printf("\n\nghe chua ghe chua");
    getch();
    return 0;
}
