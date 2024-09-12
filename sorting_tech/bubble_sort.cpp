#include<iostream>
#include<climits>
using namespace std;

void bubble_sort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void insertion_sort(int* arr, int n ) {
    for(int i = 1; i < n; i++) {
        int temp = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

void selection_sort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

//count sort
int maximum(int* arr, int n) {
    int max = INT_MIN;
    int i;
    for(i = 0; i < n; i++) {
        if(max < arr[i])
            max = arr[i];
    }
    return max;
}

void count_sort(int* arr, int n) {
    int max = maximum(arr, n);
    int i, j;
    int* count = new int[max + 1];
    for(i = 0; i <= max; i++) {
        count[i] = 0;
    }
    for(i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    i = 0;
    j = 0;
    while(i <= max) {
        if(count[i] > 0) {
            arr[j] = i;
            count[i]--;
            j++;
        }
        else {
            i++;
        }
    }
    delete[] count;
}
//quick sort
partition(int* a,int lb,int ub)
{
    int i=lb;
    int j=ub;
    int pivot=a[lb];
    while(i<j)
    {
        while(a[i]<=pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<j)
        {
        swap(a[i],a[j]);
        }
    }
    swap(a[lb],a[j]);
    return j;
}

quick_sort(int* arr,int lb,int ub)
{
    if(lb<ub)
    {
        int lock=partition(arr,lb,ub);
        quick_sort(arr,lb,lock-1);
        quick_sort(arr,lock+1,ub);
    }
}
void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int* arr, int lb, int mid, int ub)
{
    int i = lb;
    int j = mid + 1;
    int k = lb;
    int l;
    int* b = new int[ub + 1]; // Assuming b is the temporary array to store merged elements
    
    while (i <= mid && j <= ub)
    {
        if (arr[i] <= arr[j])
        {
            b[k] = arr[i];
            i++;
        }
        else
        {
            b[k] = arr[j];
            j++;
        }
        k++;
    }
    
    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = arr[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = arr[i];
            i++;
            k++;
        }
    }
    
    for (l = lb; l <= ub; l++)
    {
        arr[l] = b[l];
    }
}
//merge sort

merge_sort(int* arr,int lb,int ub)
{
    if(lb<ub)
    {
        int mid=(lb+ub)/2;
        merge_sort(arr,lb,mid);
        merge_sort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main() {
    int n;
    cout << "Enter the size of the array to sort: ";
    cin >> n;
    int* arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Uncomment the sorting algorithm you want to use
    // bubble_sort(arr, n);
    // selection_sort(arr, n);
    // insertion_sort(arr, n);
    //count_sort(arr, n);
    //quick_sort(arr,0,n-1);
    //merge_sort(arr,0,n-1);

    cout << "Sorted array: ";
    print_array(arr, n);
    delete[] arr;
    return 0;
}