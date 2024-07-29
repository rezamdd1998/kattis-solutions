#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n,temp=-1,x;
    vector<int> arr;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x!= temp)
        {
            temp = x;
            arr.push_back(x);
        }
    }
    int cnt = 0;
    if(arr.size() == 1)
        cout<<1<<endl;
    else
    {
         if(arr[0] > arr[1])
             temp = 1;
         else
             temp = 0;
         int ss;
         for(int i=1;i<arr.size()-1;i++)
         {
             if(arr[i] > arr[i+1])
                 ss = 1;
             else
                 ss = 0;
             if(temp != ss)
             {
                cnt++;
                temp = ss;
             }
         }
         cout<<cnt+2<<endl;
    }
//    for(int i=0;i<arr.size();i++)
//        cout<<arr[i]<<" ";
    return 0;
}
