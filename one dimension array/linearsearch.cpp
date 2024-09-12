#include<iostream>
 using namespace std;
 int main()
 {
    cout<<"Enter the number of element in this array";
    int n;
    cin>>n;
    int arr[n];
    int i;
    for( i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number to be searched";
    int num;
    cin>>num;
        //checkmarks
        bool flag=false;
        for(int i=0;i<=n-1;i++)
        {
           if(arr[i]==num){
            flag=true;
            int c=i;
            break;
           }
           else 
          flag=false;
        }
        if(flag==true)
            cout<<"mumeber found in"<<" "<<i;
            else
            cout<<"fuck off";
 }
            
 