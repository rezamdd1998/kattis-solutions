#include <iostream>
#include <map>
#include <string.h>
#include <list>
#define ll long long
using namespace std;
#define lic list<pair<int,char>>







//ll func(lic input)
//{
//    for(auto itr = input.begin();itr!=input.end();++itr)
//    {
//        if((*itr).second == '*')
//        {
//            auto itr2 = itr;
//            ++itr2;
//            (*itr).first = (*itr).first * (*itr2).first;
//            (*itr).second = (*itr2).second;
//            input.erase(itr2);
//        }
//        else if((*itr).second == '/')
//        {
//            auto itr2 = itr;
//            ++itr2;
//            (*itr).first = (*itr).first / (*itr2).first;
//            input.erase(itr2);
//        }
//    }
//    auto itr = input.begin();
//    ll sum = 0;
//    for(itr;itr != input.end();++itr)
//    {
//        ll s = (*itr).first;
//        char c = (*itr).second;
//        auto itr2 = itr;
//        itr2++;
//        if(c == ' ')
//            break;
//        if(c == '+')
//            sum += s + (*itr2).first;
//        else
//            sum = sum +s - (*itr2).first;
//        sum -= s;

//    }
//    sum += 4;
//    return sum;

//}




ll calc(char op[3])
{
    int j=0,tmp;
    int arr2[4];
    char oppp[3];
    int size = 4;
    bool flag = false;
    for(int i=0;i<3;i++)
    {
        if((op[i] == '+' || op[i] == '-'))
        {
            if(!flag)
            {
                arr2[j] = 4;
                oppp[j] = op[i];
                j++;
            }
            flag = false;


        }
        else
        {
            tmp = 4;
            while(i<3 && (op[i] == '*' || op[i] == '/'))
            {
                if(op[i]=='*')
                {
                    tmp *= 4;
                }
                else
                {
                    tmp /= 4;
                }
                size --;
                i++;
            }
            arr2[j] = tmp;
            if(i < 3)
            {
                flag = true;
                oppp[j] = op[i];
                j++;
            }
            tmp = 4;
            i--;
        }
    }
    //maziyar
    if(op[2]=='+' || op[2]=='-')
        arr2[j]=4;
    ll sum = arr2[0];

    for(int i=0;i<size-1;i++)
    {
        if(oppp[i]=='-')
        {
            sum = sum - arr2[i+1];
        }
        else
        {
            sum = sum + arr2[i+1];
        }
    }

//    cout<<"sum = "<<sum<<endl;

    return sum;
}


int main()
{
//    cout<<"wtf"<<endl;
    char op[4] = {'*','+','/','-'},n[3];
    map<ll,string> nums;
    string res = "";
//    lic x ;
//    x.push_back(make_pair(4,'*'));
//    x.push_back(make_pair(4,'*'));
//    x.push_back(make_pair(4,'*'));
//    x.push_back(make_pair(4,' '));
    ll s=0;
    n[0]='*';
    n[1]='/';
    n[2]='-';
//    cout<<func(x)<<endl;
//    cout<<calc(n)<<endl<<endl;
    for(int i=0;i<4;i++)
    {
        n[0] = op[i];
        for(int j=0;j<4;j++)
        {
            n[1] = op[j];
            for(int k=0;k<4;k++)
            {
                n[2] = op[k];
//                cout<<"hi"<<endl;
                s = calc(n);
                res +="4 ";
                res +=n[0];
                res +=" 4 ";
                res +=n[1];
                res +=" 4 ";
                res +=n[2];
                res +=" 4";
                nums.insert(make_pair(s,res));
                res = "";
            }
        }
    }
     int x,m;
     cin>>x;
//    for(auto itr = nums.begin();itr != nums.end();++itr)
//    {
//        cout<<(*itr).first<<" "<<(*itr).second<<endl;
//    }
     while(x--)
     {
        cin>>m;
        auto it = nums.find(m);
        if(it != nums.end())
        {
            cout<<(*it).second<<" = "<<(*it).first<<endl;
        }
        else
        {
            cout<<"no solution"<<endl;
        }
     }



    return 0;
}
