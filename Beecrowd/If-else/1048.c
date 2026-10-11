#include<stdio.h>
int main()
{
    float n;
    scanf("%f", &n);
    

    if(n>=0 && n<=400)
    {
        float first=(n*15)/100;
    float second = n+ first;

        printf("Novo salario: %.2f\n",second);
        printf("Reajuste ganho: %.2f\n",first);
         printf("Em percentual: 15 %%\n");
    }
    else{
        if(n>=400.01 && n<=800){

        
        float third= (n*12)/100;
        float fourth= third+ n;
          printf("Novo salario: %.2f\n",fourth);
        printf("Reajuste ganho: %.2f\n",third);
         printf("Em percentual: 12 %%\n");
         }
        if(n>=800.01 && n<=1200){
        float five= (n*10)/100;
        float six= five+ n;
          printf("Novo salario: %.2f\n",six);
        printf("Reajuste ganho: %.2f\n",five);
         printf("Em percentual: 10 %%\n");
         }
         if(n>=1200.01 && n<=2000){
        float seven= (n*7)/100;
        float eight= seven+ n;
          printf("Novo salario: %.2f\n",eight);
        printf("Reajuste ganho: %.2f\n",seven);
         printf("Em percentual: 7 %%\n");
         }
         if(n>2000){ 
        float last= (n*4)/100;
        float last2= last+ n;
          printf("Novo salario: %.2f\n",last2);
        printf("Reajuste ganho: %.2f\n",last);
         printf("Em percentual: 4 %%\n");
         }
        }
}