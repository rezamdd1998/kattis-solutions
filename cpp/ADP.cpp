#include <iostream>
using namespace std;

int main()
{
    long long n,m;
    while(cin>>n>>m)
    {
        cout<<max(n,m) - min(n,m)<<endl;
    }

    return 0;
}