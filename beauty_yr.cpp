#include <bits/stdc++.h>
using namespace std;
bool isUnique(int year){
     string yr= to_string(year);
     set<char> set;
     for (int i = 0; i < yr.size(); i++)
     {
        if(set.find(yr[i]) != set.end()) return false;
        else set.insert(yr[i]);
     }
     return true;
     
}
int main()
{
    int x;
    cin>>x;
    while(1){
        x+=1;
        if(isUnique(x)){
            cout<<x<<'\n';
            break;
        }
    }
    return 0;
}