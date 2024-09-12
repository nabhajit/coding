#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x) pow(x,3)-8*x-4
#define g(x) 3*x*x-8-0                //find derivative
#define e 0.0001

int main()
{
        float x1,x2,f1,f2,g1;               //5 variable
        printf("Enter the initial value");
        scanf("%f",&x1);

        do{
                f1=f(x1);
                g1=g(x1);
                x2=x1-(f1/g1);              //formula
                x1=x2;
                f2=f(x2);
        }while(f2>e);
        printf("%f",x2);                    //rooooooooooooot
}