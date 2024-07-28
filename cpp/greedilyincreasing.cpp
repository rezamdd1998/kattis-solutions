#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],s=0;
    vector<int> res;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
        {
            res.push_back(arr[i]);
        }
        else if(arr[i] > arr[s])
        {
            res.push_back(arr[i]);
            s = i;
        }
    }
    cout<<res.size()<<endl;
    for(auto item : res)
        cout<<item<<" ";
    cout<<endl;
    return 0;
}
