#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        int min_num=INT_MAX;
        for (int i = 0; i < n; i++)
        {
           int x;
           cin>>x;
           min_num = min(min_num , x);
           sum+=x;
        }
        
        cout<<(sum-(min_num * n))<<'\n';
    }
    return 0;
}