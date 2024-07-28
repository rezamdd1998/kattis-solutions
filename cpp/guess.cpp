#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1000];
    for(int i=1;i<=1000;i++)
        arr[i-1] = i;
    int l = 1, r = 1000;
    string res;
    int guess;
    for(int i=0;i<10;i++)
    {
        guess= (l+r)/2;
        cout<<guess<<endl;
        cout.flush();
        cin>>res;

        if( res == "correct")
            break;
        if(res == "lower")
            r = (l+r)/2 - 1;
        else
            l = (l+r)/2 + 1;
    }
    return 0;
}
