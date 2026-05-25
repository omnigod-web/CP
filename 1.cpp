#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> openion;
    for (int i = 0; i < n; i++)
    {   int x;
        cin>>x;
        openion.push_back(x);
    }
    for(auto it:openion) {
        if(it==1){
          cout<<"HARD" ;
          return 0;  
        } 
    }
    cout<<"EASY";
    return 0;
}