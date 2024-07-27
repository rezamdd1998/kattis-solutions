#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string right_rotate(string x)
{
    char tmp = x[x.size()-1];
    x.erase(x.begin()+x.size()-1,x.end());
    x.insert(x.begin(),tmp);
    return x;
}
int main()
{
    string str,sbstr,temp;
    cin>>str;
    int cnt=1;
    for(int i=1;i<=str.size()/2;i++)
    {
        if(str.size() % i == 0)
        {
            bool istrue = true;
            for(int j=0;j<(str.size()/i)-1;j++)
            {
                sbstr = str.substr(j*i,i);
                temp = str.substr(i*(j+1),i);
                if(temp != right_rotate(sbstr))
                {
                    istrue = false;
                    break;
                }
            }
            if(istrue)
            {
                cout<<i<<endl;
                return 0;
            }
        }
    }
    cout<<str.size()<<endl;
    return 0;
}