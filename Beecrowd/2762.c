#include<stdio.h>
int main()
{ long long int a,b;

   if(scanf("%lld.%lld", &a, &b)==2)
   {
       printf("%lld.%lld\n", b, a);
   }

}