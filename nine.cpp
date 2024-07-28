#include <iostream>
#include <math.h>
#define INF 1000000007
using namespace std;
long long power(long long x, long long y)
{
    long long temp;
    if( y == 0)
        return 1;
    temp = power(x, y/2) % INF;
    if (y%2 == 0)
        return temp*temp % INF;
    else
        return x*temp*temp % INF;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long d;
        cin>>d;
        long long res = 8 ;
        res *= power(9,d-1);
        cout<<res % INF<<endl;

    }
    return 0;
}