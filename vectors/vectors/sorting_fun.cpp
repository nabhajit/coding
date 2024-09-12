//two-pass method.                                      2 bar travel ek bar count k liye or ekabar overwriting
/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"enter the number of loops u want";
    int n;
    cin>>n;
     int coz=0;
    int coo=0;
    for(int i=0;i<=n-1;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<=v.size()-1;i++)
    {
        if(v[i]==0) 
            coz++;
        else
            coo++;
    } 
    int i = 0;
    for(i=0;i<v.size()-1;i++)
    {
        if(i<coz)   
            v[i]=0;
        else
            v[i]=1;
    }
    for( int i=0;i<=v.size()-1;i++)
        cout<<v[i]<<"\t";
}
*/
//two-pointer method
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
int main();
{
    vector <int> v;
    

}