#include <iostream>
#include <algorithm>
#include <set>
#define ll long long
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        int n,m;
        cin>>n>>m;
        ll tmp;
        set<ll,::greater<ll>> a , b;
        for(int i=0;i<n;i++)
        {
            cin>>tmp;
            a.insert(tmp);
        }
        for(int i=0;i<m;i++)
        {
            cin>>tmp;
            b.insert(tmp);
        }
        if(*(a.begin()) >= *(b.begin()) )
            cout<<"Godzilla"<<endl;
        else
        {
            cout<<"MechaGodzilla"<<endl;
        }
        
    }


    return 0;
}