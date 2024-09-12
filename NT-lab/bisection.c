#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) pow(x,5)+3*x-5
#define e 0.0001

int main()
{
    int x0,x1,x2;
    float f0,f1,f2;
    printf("Enter x0");
    scanf("%d",&x0);
    printf("Enter x1");
    scanf("%d",&x1);
    
    int i=0;
    do{
        f0=f(x0);
        f1=f(x1);
        x2=(x1+x2)/2;       //mid
        f2=f(x2);
        if(f0*f1>0)
            x1=x2;
        else
            x0=x2;
        i++;
        printf("%d",i);
        printf("%f",f2);
        printf("%f",x2);
    }while(f2>e);
}