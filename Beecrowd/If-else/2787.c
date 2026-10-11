#include<stdio.h>
int main()
{
    long long a,b;
    scanf("%lld %lld",&a,&b);
    if(a%2==0 && b%2!=0){
        printf("0\n");
    }
    else if (a%2!=0 && b%2==0)
    {
         printf("0\n");
    }
     else if (a%2!=0 && b%2!=0)
    {
         printf("1\n");
    }
     else if (a%2==0 && b%2==0)
    {
         printf("1\n");
    }
    return 0;
}