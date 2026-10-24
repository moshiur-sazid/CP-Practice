#include<stdio.h>
int main()
{
long long int n ,m ,p;
scanf("%lld",&n);
char c;

scanf("%lld %c %lld",&m,&c ,&p);
if(c=='+') {
if(m+p>n){printf("OVERFLOW\n");

}
else {printf("OK\n");

}

}
else if(c=='*'){if(m*p>n){printf("OVERFLOW\n");

}
else {printf("OK\n");

}
}
return 0;
}