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
         ll number;
         string res = "";
         long long z ;
         cin>>z;
         string input;
         cin>>input;
         int s = input.find('/');
         number.first = stoi(input.substr(0,s));
         number.second = stoi(input.substr(s+1,input.size()-1));
         while(number.first != number.second)
         {
             if(number.first > number.second)
             {
                 number.first = (number.first - number.second);
                 res += "R";
             }
             else
             {
                 number.second = number.second - number.first;
                 res += "L";
             }
         }
         long long i = 1;
         for(int k=res.size()-1;k>=0;k--)
         {
             if(res[k] == 'L')
                 i *= 2;
             else
                 i = 2*i + 1;
         }
         cout<<z<<" "<<i<<endl;
    }
    return 0;
}
