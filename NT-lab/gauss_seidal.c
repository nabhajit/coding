#include<stdio.h>
#include<stdlib.h>
#include<climits>
#define e 010001

int max(int *arr,int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr>max)
            max=arr[i];
    }
    return max;
}

int main()
{
    printf("Enter the number of variable");
    int n,i;
    scanf("%d",&n);
    float i,j,b[n];
    float arr[i][j];
    float x0[n];
    for (i = 0; i < n; i++)
    {
        x0[i] = 0.0;
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",arr[i][j]);
        }
    }
     for (i = 0; i < n; i++)
    {
       printf("b[%d][%d]=",i,j);
       scanf("%f",b[i][j]);
    }
     do
    {
        for (i = 0; i < n; i++)
        {
            sum = 0.0;
            for (j = 0; j < n; j++)
            {
                if (j != i)
                {
                    sum += A[i][j] * x0[j];
                }
            }
            x[i] = (B[i] - sum) / A[i][i];
            err[i] = fabs(x[i] - x0[i]);
            x0[i] = x[i];
            printf("x[%d] = %.6lf  ", i, x[i]);
        }
        error_max = max_ele(err, n);
        printf(" Max error = %.6lf \n", error_max);
    } while (error_max > err_tol);

    for (i = 0; i < n; i++)
    {
        printf("x[%d] = %lf\n", i + 1, x[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = 0.0;
        for (j = 0; j < n; j++)
        {
            sum = sum + A[i][j] * x[j];
        }
        sum = sum - B[i];
        printf("Check equation %d = %0.6lf \n", i + 1, sum);
    }
    return 0;
}
}