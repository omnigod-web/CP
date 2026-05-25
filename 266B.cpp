#include <bits/stdc++.h>
using namespace std;
void rearrange(string &s){
    int i=0;
    while(i<s.size()-1)
    {
        if(s[i] =='B' && s[i+1]=='G'){
            swap(s[i] , s[i+1]);
            i+=2;
        }
        else
        i++;
    }
    
}

int main()
{   
    int n;
    cin>>n;
    int time;
    cin>>time;
    string s;
    cin>>s;
    while(time--){
        rearrange(s);
    }
    cout<<s;
    return 0;
}