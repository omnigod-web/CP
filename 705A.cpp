#include <bits/stdc++.h>
using namespace std;

int main()
{   int n;
    cin>>n;
    string s;
    cin>>s;
    if(n < 26){
        cout<<"NO";
        return 0;
    }
    set<char> set;
    for (int i = 0; i < n; i++)
    {
       if(set.find(tolower(s[i]))== set.end()){
        set.insert(tolower(s[i]));
       }else{
         continue;
       }
    }
    if(set.size()==26){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    
    return 0;
}