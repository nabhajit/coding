#include<stdio.h>
#include<stdlib.h>
#define f(x) (1 + x + x * x)
#define e 0.0001

int main()
{
    float a,b,sub,sum=0.0,integral,h,x;
    printf("enter the value of a");
    scanf("%f",&a);
     printf("enter the value of b");
    scanf("%f",&a);
    printf("enter the value of a");
    scanf("%f",&sub);
    sum=f(a)+f(b);
    h=(b-a)/sub;
    for(int i=1;i<sub;i++)
    {
        x=a+i*h;
        if(i%2!=0)
            sum=sum+4*f(x);
        else
            sum=sum+2*f(x);
    }
    integral=(h/3)*sum;
    printf("Integration is %d",integral);
}
