

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    cout << "Enter the total elements";
    int n;
    cin >> n;
    int k;
    cout << "Enter the value of k";
    cin >> k;
    vector<int> v;
    for(int i=0;i<n-1;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    int max = v[n-1]; // select the maximum element
    int sum=0;
    while(k!=0)
    {
        v.erase(v.begin()+n-1); // remove the selected elementsfrom the array
        v.insert(v.begin(),max+1); // add a new element with avalue of m+1 to the array
        max++; // increase your score by m
        k--; // decrease k
        sum+=max;
    }
    cout << "The maximum score you can achieve after performing "<< k << " times is " << sum;
}