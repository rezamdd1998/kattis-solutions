#include <iostream>
#include <algorithm>
#include <math.h>
#define ll long long
using namespace std;
bool check2(string n)
{
    for(int i =0;i<n.size();i++)
        if(n[i] != '0' && n[i] != '1')
            return false;
    return true;
}
bool check8(string n)
{
    for(int i =0;i<n.size();i++)
        if(n[i]>='8' || n[i]<'0')
            return false;
    return true;
}
bool check10(string n)
{
    for(int i =0;i<n.size();i++)
        if(n[i] < '0' || n[i]>'9')
            return false;
    return true;
}
bool prime(ll n)
{
    if(n < 2)
        return false;
    for(ll i = 2;i<=sqrt(n);i++)
        if(n % i == 0)
            return false;
    return true;
}
ll NumToDec(string x,int base)
{
    ll res = 0;
    int n ;
    for(int i=0;i<x.size();i++)
    {
        switch(x[i])
        {
            case 'A': n = 10;break;
            case 'B': n = 11;break;
            case 'C': n = 12;break;
            case 'D': n = 13;break;
            case 'E': n = 14;break;
            case 'F': n = 15;break;
            default : n = x[i] - '0';
        }
        res = res * base + n;
    }
//    cout<<res<<endl;
    return res;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string x;
        cin>>x;
        int cnt = 0,bn=1;
        if(check2(x))
        {
            bn++;
            if(prime(NumToDec(x,2)))
            {
                cnt++;
            }
        }
        if(check8(x))
        {
            bn++;
            if(prime(NumToDec(x,8)))
                cnt++;
        }
        if(check10(x))
        {
            bn++;
            if(prime(NumToDec(x,10)))
                cnt++;
        }
//        cout<<NumToDec(x,16)<<endl;
        if(prime(NumToDec(x,16)))
        {
            cnt++;
        }
        cout<<cnt/__gcd(bn,cnt)<<'/'<<bn/__gcd(bn,cnt)<<endl;
//        NumToDec(x,16);
    }
    return 0;
}
