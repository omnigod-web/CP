//ballons
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       int n;
       cin>>n;
       string s;
       cin>>s;
       set<char> solved;
       int ballons=0;
       for (int i = 0; i < n; i++)
       { 
            if(solved.find(s[i]) != solved.end()){
                ballons++;
            }else {
                solved.insert(s[i]);
                ballons+=2;
            }
       }
       cout<< ballons <<endl;
    }
    
    return 0;
}