#include <stdio.h>

#define size 10;

// Function for binary search
void binary_search(int arr[], int target, int size) {
    int low = 0;               
    int high = size - 1;       

    while (low <= high) {
        int mid = low + (high - low) / 2;   

        if (arr[mid] == target) {   
            printf("Element found at index %d\n", mid);
            return;                 
        } else if (arr[mid] > target) {
            high = mid - 1;        
        } else {
            low = mid + 1;          
        }
    }

    printf("Element not found\n");  
}
void bubble_sort(int arr[])
{
    int i,j;
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main() {
    int arr[size];
    int i;

    printf("Enter %d integers in sorted order:\n", size);
    
    // Reading input array
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform binary search for target value 6
    binary_search(arr, 6, size);

    return 0;
}
