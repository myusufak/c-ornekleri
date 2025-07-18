#include <stdio.h>

int main() {

int i,j;
long long faktoriyel=1;
printf("Sayi Giriniz: ");
scanf("%d",&j);
if (j<0)
{
printf("Negatif sayilarin faktoriyeli hesaplanmaz\n");
return 1;
}
else if (j > 20) {
   printf("20'nin uzerindeki sayilar, hesaplamada veri tasması (overflow) riskini artirir.\n");
  
    return 1;
}

for(i=1;i<=j;i++){
    faktoriyel*=i;
}    
    printf("%lld\n",faktoriyel);
    return 0;
}
