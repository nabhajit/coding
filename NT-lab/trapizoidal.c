#include<stdio.h>
#include<stdlib.h>
#define f(x) (1 + x + x * x)
#define e 0.0001

int main()
{
    float a,b,sub,sum=0.0,integral,i,h,x;
    printf("Enter the value of a");
    scanf("%f",&a);
    printf("Enter the value of b");
    scanf("%f",&b);
    printf("Enter the value of sub interval");
    scanf("%f",&sub);

    h=(b-a)/sub;

    for(i=1;i<sub;i++)
    {
        x=a+i*h;
        sum=sum+f(x);
    }
    integral=(h/2)*(f(a)+f(b)+2*sum);
}