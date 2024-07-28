#include <iostream>

using namespace std;

int main()
{
    int n,m,a,b,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int cl = 0,city = n-1;
        bool arr[n];
        for(int i=0;i<n;i++)
            arr[i] = false;
        for(int i=0;i<m;i++)
        {
            cin>>a>>b;
            a--;
            b--;
            if(i==0)
                arr[a] = true;
            if(!city)
                continue;
            if(!arr[b])
            {
                city--;
                cl++;
            }
            else
            {
                if(!arr[a])
                {
                    city--;
                    cl++;
                }
            }
            arr[b] = true;
        }
        cout<<cl<<endl;
    }


    return 0;
}
