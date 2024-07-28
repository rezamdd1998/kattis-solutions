#include <iostream>
#include <map>
using namespace std;


int main()
{
    map<string,string> x={make_pair("A#","Bb"),make_pair("C#","Db"),make_pair("D#","Eb"),make_pair("F#","Gb"),make_pair("G#","Ab"),
make_pair("Bb","A#"),make_pair("Db","C#"),make_pair("Eb","D#"),make_pair("Gb","F#"),make_pair("Ab","G#")};

    string str,ss;
    int cnt=1;
    while(cin>>str && cin>>ss)
    {
        if(x.find(str) != x.end())
        {
            cout<<"Case "<<cnt<<": "<<x[str]<<" "<<ss<<endl;
        }
        else
        {
            cout<<"Case "<<cnt<<": UNIQUE"<<endl;
        }
        cnt++;
    }

    return 0;
}