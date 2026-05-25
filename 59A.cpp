#include <bits/stdc++.h>
using namespace std;

int main()
{
    int up_count=0 , lo_count=0;
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>=65 && s[i] <= 90) up_count++;
        else lo_count++;
    }
    if(lo_count>=up_count){
        for (int i = 0; i < s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
    }else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    
    cout<<s;
    return 0;
}