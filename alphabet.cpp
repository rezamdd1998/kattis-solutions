#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int lis( int arr[], int n )
{
    int lis[n];
    lis[0] = 1;

    for (int i = 1; i < n; i++ )
    {
        lis[i] = 1;
        for (int j = 0; j < i; j++ )
            if ( arr[i] > arr[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    }
    return *max_element(lis, lis+n);
}

int main()
{
    string str;
    cin>>str;
    int arr[str.size()];
    for(int i=0;i<str.size();i++)
    {
        arr[i] = str[i];
    }
    cout<<26-lis(arr,str.size())<<endl;
    return 0;
}
