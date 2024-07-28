#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
bool cmp(pair<char,int>a,pair<char,int> b)
{
    return a.second < b.second;
}
int main()
{
    string str;
    cin>>str;
    map<char,int> table;
    for(int i=0;i<str.size();i++)
        table.insert(make_pair(str[i],count(str.begin(),str.end(),str[i])));
    pair<char,int> arr[table.size()];
    int j=0;
    for(auto itr = table.begin();itr != table.end();++itr)
    {
        arr[j] = *itr;
        j++;
    }
    sort(arr,arr+table.size(),cmp);
    if(table.size()==1 || table.size() == 2)
    {
        cout<<0<<endl;
        return 0;
    }
    int cnt=0;
    for(int i=0;i<table.size()-2;i++)
        cnt+=arr[i].second;
    cout<<cnt<<endl;
    return 0;
}
