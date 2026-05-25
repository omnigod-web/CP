#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >>s;
    unordered_set<char> set;
    for (int i = 0;  i<s.size(); i++)
    {
        if(set.find(s[i])!=set.end()) continue;
        else{
            set.insert(s[i]);
        }
    }
    if(set.size() % 2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!" ;  
    return 0;
}