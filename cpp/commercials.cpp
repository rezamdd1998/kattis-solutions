#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,p;
    cin>>n>>p;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]-=p;
    }
    int a=0,b=0;
    for(int i=0;i<n;i++)
    {
        a = max(0,a+arr[i]);
        b = max(b,a);
    }
    cout<<b<<endl;
    return 0;
}
