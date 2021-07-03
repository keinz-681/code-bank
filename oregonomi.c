#include<stdio.h>

int main(void)
{
    while(1)
  {
    double a,b;
    printf("a= ");
    scanf("%lf",&a);
    printf("b= ");
    scanf("%lf",&b);

    printf("x=%f\n",a+b);
    printf("x=%f\n",a-b);
    printf("x=%f\n",a*b);
    printf("x=%f\n\n\n",a/b);
    
    scanf("");
  }

    return 0;
}