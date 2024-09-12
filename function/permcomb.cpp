#include<iostream>
using namespace std;
int fact(int x){
   int product=1;
    for(int i=1;i<=x;i++)
    product*=i;
    return product;
}
int combination(int n,int r){
    int ncr;       //return type and arguements   //<void/int/float>function_name(int a,int b,int c)
    ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
   
}
int permutation(int n,int r){
    int npr;
    npr=fact(n)/fact(n-r);
    return npr;
}

int main(){
    cout<<"enterr the number";
    int n;
    cin>>n;
    cout<<"Enter the value of r";
    int r;
    cin>>r;
    int ncr=combination(n,r);
    cout<<ncr<<endl;
    int npr=permutation(n,r);
    cout<<npr;
}