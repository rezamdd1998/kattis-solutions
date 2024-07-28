#include <iostream>
#include <algorithm>
#define INF 1000000007
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    arr[n] = INF;
    sort(arr,arr+n+1);
    int start = arr[0], end = arr[0];
    for(int i=1;i<n+1;i++)
    {
        if(arr[i]==arr[i-1]+1)
        {
            end = arr[i];
        }
        else
        {
            if(end - start >= 2)
            {
                cout<<start<<"-"<<end<<" ";
            }
            else if(end == start)
            {
                cout<<start<<" ";
            }
            else
            {
                cout<<start<<" "<<end<<" ";
            }
            start = arr[i];
            end = start;
        }
    }
    cout<<endl;
    return 0;
}
