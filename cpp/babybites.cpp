#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string x;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        if(x=="mumble" || stoi(x)==i)
            continue;
        else
        {
            cout<<"something is fishy"<<endl;
            return 0;
        }
    }
    cout<<"makes sense"<<endl;
    return 0;
}
