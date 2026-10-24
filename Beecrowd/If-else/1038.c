#include<stdio.h>
int main()
{
int a,b;
double price;
scanf("%d %d", &a,&b);
if (a==1){ price=4.00;

}
else if (a==2)
{price=4.50;}
else if (a==3)
{price=5.00;}
else if (a==4)
{price=2.00;}
else if (a==5)
{price=1.50;}
double total = price *b;
printf("Total: R$ %.2f\n",total);
return 0;
}