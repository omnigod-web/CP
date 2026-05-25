#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string s2;
    for (int i = 0; i < s.size(); i++)
    {
       if(s[i]!='+') s2+=s[i];
    }
    sort(s2.begin(),s2.end());
    for (int i = 0; i < s2.size(); i++)
    {
       s[2*i]=s2[i];
    }
    cout<<s;
    return 0;
}