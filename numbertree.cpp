#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long n;
    cin>>n;
    long long root = pow(2,n+1) - 1;
    long long i = 1;
    long long number = root;
    string str;
    cin>>str;
    for(int k=0;k<str.size();k++)
    {
        if(str[k] == 'L')
        {
            i = 2*i;
//            number = number - i;
        }
        else
        {
            i = 2*i+1;
//            number = number - i;
        }
    }
    cout<<number-i+1<<endl;
    return 0;
}
