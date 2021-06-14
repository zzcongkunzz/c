#include <stdio.h>
void main()
{
    float com,tienbanhang;
    printf ("nhap_vao_tien_ban_hang:");
    scanf ("%f",&tienbanhang);
    if (tienbanhang >= 1000)
        com = tienbanhang*0.1;
    else com=0;
   printf ("\n tien_hoa_hong_la:%f",com);
}
