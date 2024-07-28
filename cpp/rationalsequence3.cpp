#include <iostream>
#include <string>
using namespace std;
#define ll pair<long,long>
int main()
{
    int t;
    cin>>t;
    for(int test=1;test<=t;test++)
    {
         long long z,n,p=1,q=1;
         cin>>z>>n;
         string res="";
         while(n!=1)
         {
             if(n %2 == 1)
                 res += "R";
             else
                 res += "L";
             n /= 2;
         }
         for(int k=res.size()-1;k>=0;k--)
         {
             if(res[k] == 'L')
                 q = p + q;
             else
                 p = p+q;
         }
         cout<<z<<" "<<p<<"/"<<q<<endl;
    }
    return 0;
}
