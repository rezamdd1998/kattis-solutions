#include <iostream>
using namespace std;
const int MAXN = 52*52+3;
int parent[MAXN];
int find(int a)
{
    if(parent[a]==a)
        return a;
    return parent[a] = find(parent[a]);
}
void join(int a,int b)
{
    parent[find(a)] = parent[find(b)];
}
int check(int a,int b)
{
    return find(a) == find(b);
}
int main()
{
    int r,c;
    cin>>r>>c;
    char arr[r+2][c+2];
    string str;
    for(int i=0;i<(r+2)*(c+2);i++)
        parent[i] = i;
    for(int i=0;i<r+2;i++)
        if(i==0 || i==r+1)
            for(int j=0;j<c+2;j++)
                arr[i][j] = 'W';
        else
        {
            cin>>str;
            for(int j=0;j<c+2;j++)
                if(j==0 || j==c+1)
                    arr[i][j] = 'W';
                else
                    arr[i][j] = str[j-1];
        }
    for(int i=1;i<r+1;i++)
        for(int j=1;j<c+1;j++)
        {
            if(arr[i][j] == 'L' || arr[i][j]=='C')
            {
                if(arr[i-1][j] == 'C' || arr[i-1][j] == 'L')
                    if(!check((i-1)*(c+2)+j,i*(c+2)+j))
                        join((i-1)*(c+2)+j,i*(c+2)+j);
                if(arr[i+1][j] == 'C' || arr[i+1][j] == 'L')
                    if(!check((i+1)*(c+2)+j,i*(c+2)+j))
                        join(i*(c+2)+j,(i+1)*(c+2)+j);
                if(arr[i][j-1] == 'C' || arr[i][j-1] == 'L')
                    if(!check(i*(c+2)+j-1,i*(c+2)+j))
                        join(i*(c+2)+j-1,i*(c+2)+j);
                if(arr[i][j+1] == 'C' || arr[i][j+1] == 'L')
                    if(!check(i*(c+2)+j+1,i*(c+2)+j))
                        join(i*(c+2)+j,i*(c+2)+j+1);
            }
//            cout<<find(i*(c+1)+j)<<endl;
        }
    int cnt = 0;
    bool x[MAXN] = {false};
//    for(int i=0;i<(r+2)*(c+2);i++)
//        cout<<parent[i]<<endl;
//        cout<<"parent "<<i<<" : "<<find(i)<</*" , "<<x[find(i)]<<*/endl;
    for(int i=0;i<(r+2)*(c+2);i++)
    {
        if(arr[i/(c+2)][i%(c+2)] == 'L')
            if(!x[find(i)])
            {
                x[find(i)] = true;
                cnt++;
            }
    }
    cout<<cnt<<endl;
//    for(int i=0;i<r+2;i++)
//    {
//        for(int j=0;j<c+2;j++)
//            cout<<arr[i][j];
//        cout<<endl;
//    }

    return 0;
}
