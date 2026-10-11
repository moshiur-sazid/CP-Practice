#include<stdio.h>
int main()
{
    double  a;
    scanf("%lf",&a);
    long long n = (long long)(a*100+0.5);
     printf("NOTAS:\n");
    printf("%lld nota(s) de R$ 100.00\n",n/10000);
    n=n%10000;
    printf("%lld nota(s) de R$ 50.00\n",n/5000);
    n=n%5000;
printf("%lld nota(s) de R$ 20.00\n",n/2000);
n=n%2000;
printf("%lld nota(s) de R$ 10.00\n",n/1000);
n=n%1000;
printf("%lld nota(s) de R$ 5.00\n",n/500);
n=n%500;
printf("%lld nota(s) de R$ 2.00\n",n/200);
n=n%200;
printf("MOEDAS:\n");

printf("%lld moeda(s) de R$ 1.00\n",n/100);
n=n%100;
printf("%lld moeda(s) de R$ 0.50\n",n/50);
n=n%50;
printf("%lld moeda(s) de R$ 0.25\n",n/25);
n=n%25;
printf("%lld moeda(s) de R$ 0.10\n",n/10);
n=n%10;
printf("%lld moeda(s) de R$ 0.05\n",n/5);
n=n%5;
printf("%lld moeda(s) de R$ 0.01\n",n/1);
return 0;

    


}