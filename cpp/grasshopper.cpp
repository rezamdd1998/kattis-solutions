#include <bits/stdc++.h>
using namespace std;
bool InRange(int x,int y,int X,int Y)
{
    return (x>=0 && x<X && y>=0 && y<Y);
}
int main()
{
    int r,c,gr,gc,lr,lc;
    while(cin>>r>>c>>gr>>gc>>lr>>lc)
    {
        pair<int,int> cells[r][c];
        int values[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cells[i][j] = make_pair(i,j);
                values[i][j] = -1;
            }
        }
        queue<pair<int,int>> q;
        q.push(cells[gr-1][gc-1]);
        values[gr-1][gc-1] = 0;
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            vector<pair<int,int>> vc;
            vc.push_back(make_pair(x-1,y+2));
            vc.push_back(make_pair(x-1,y-2));
            vc.push_back(make_pair(x+1,y+2));
            vc.push_back(make_pair(x+1,y-2));
            vc.push_back(make_pair(x-2,y-1));
            vc.push_back(make_pair(x+2,y-1));
            vc.push_back(make_pair(x-2,y+1));
            vc.push_back(make_pair(x+2,y+1));
            for(int i=0;i<vc.size();i++)
            {
                if(InRange(vc[i].first,vc[i].second,r,c) && values[vc[i].first][vc[i].second] == -1)
                {
                    values[vc[i].first][vc[i].second] = values[x][y]+1;
                    q.push(vc[i]);
                }
            }
        }
        if(values[lr-1][lc-1] > -1)
        {
            cout<<values[lr-1][lc-1]<<endl;
        }
        else
        {
            cout<<"impossible"<<endl;
        }
    }

    return 0;
}
