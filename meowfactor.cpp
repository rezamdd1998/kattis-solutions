#include<bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    long long n,k;
    long long cnt = 0,res=1;
    cin>>n;
    long long s = sqrt(sqrt(sqrt(n)));
    for(long long i=2;i<=s;i++)
    {
        k = i;
        while(n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if(cnt > 8)
        {
            res = pow(i,cnt/9)*res;
        }
        cnt = 0;
        if(n==1)
            break;

    }
    if(cnt > 8)
    {
        res = pow(k,cnt/9)*res;
        cnt = 0;
    }
    cout<<res<<endl;

    return 0;
}
