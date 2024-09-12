#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define f(x,y) pow(x, 3) + y;
#define e 0.0001

int main()
{
     float i, h, x, y, xn;

    // User Inputs
    printf("Initial values of x and y: ");
    scanf("%f %f", &x, &y);

    printf("Step count: ");
    scanf("%f", &h);

    printf("Value of x at which y is required: ");
    scanf("%f", &xn);


    // Source Code
    printf("\tx\t\ty\n");
    for(i = x; i < xn; i = i + h)
    {
        printf("%f\t     %f\n", x, y);
        y += h * f(x, y);
        x += h;
    }
    printf("y(%.2f) = %.3f\n", xn, y);
    return 0;
}
