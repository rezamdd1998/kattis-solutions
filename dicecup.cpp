#include <iostream>

using namespace std;

int main()
{
    long long a,b;
    cin>>a>>b;
    for(int i=min(a,b)+1;i<=max(a,b)+1;i++)
        cout<<i<<endl;
    return 0;
}
