#include <bits/stdc++.h>
using namespace std;
bool IsPrime(int x)
{
    if(x<2)
        return false;
    for(int i=2;i*i<=x;i++)
        if(x%i==0)
            return false;
    return true;
}
int main()
{
    int n,x;
    cin>>n;
    for(int t=0;t<n;t++)
    {
        cin>>x;
        vector<string> res;
        for(int i=1;i<=x/2;i++)
        {
            if(IsPrime(i) && IsPrime(x-i))
                res.push_back(to_string(i)+"+"+to_string(x-i));
        }
        cout<<x<<" has "<<res.size()<<" representation(s)"<<endl;
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<endl;
        cout<<endl;
    }
    return 0;
}
