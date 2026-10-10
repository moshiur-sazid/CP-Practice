#include <stdio.h>

int main()
{
    float a, b;

    scanf("%f %f", &a, &b);

   float avrg = (a*3.5 + b*7.5 )/11.0;


    printf("MEDIA = %0.5f\n", avrg);

    return 0;
}