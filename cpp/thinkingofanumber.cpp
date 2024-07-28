#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin>>n && n!= 0)
    {
        int l = 1;
        int r = 10e7;
        vector<int> divs;
        string a,b,x;
        for(int i=0;i<n;i++)
        {
            cin>>a>>b>>x;
            if(a=="divisible")
                divs.push_back(stoi(x));
            else if(a == "less")
                r = min(r,stoi(x));
            else
                l = max(l,stoi(x)+1);
        }
        bool cnt = false;
        if(r == 10e7)
        {
            cout<<"infinite"<<endl;
            continue;
        }
        for(int i=l;i<r;i++)
        {
            bool f = false;
            for(int j=0;j<divs.size();j++)
                if(i % divs[j] != 0)
                {
                    f = true;
                    break;
                }
            if(!f)
            {
                cnt = true;
                cout<<i<<" ";
            }
        }
        if(!cnt)
            cout<<"none";
        cout<<endl;
    }
    return 0;
}
