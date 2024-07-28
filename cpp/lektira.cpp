#include <bits/stdc++.h>
using namespace std;
string rev(string x,int l,int r)
{
    string res = "";
    for(int i=r;i>=l;i--)
        res += x[i];
    return res;
}
int main()
{
    string res,str,tmp="",a,b,c;
    cin>>str;
    res = str;
    for(int i=0;i<str.size();i++)
        for(int j=i+1;j<str.size();j++)
            for(int k=j+1;k<str.size();k++)
            {
                tmp = rev(str,0,j-1) + rev(str,j,k-1) + rev(str,k,str.size()-1);
//                cout<<tmp<<endl;
                if(tmp < res)
                    res = tmp;
            }
    cout<<res<<endl;
    return 0;
}
