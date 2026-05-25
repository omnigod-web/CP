#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        int sum=a+b+c;
        if(a == sum-a) {
             cout<<"yes"<<'\n';
            continue;
        }
        if(b == sum-b){
            cout<<"yes"<<'\n';
            continue;
        }
        if(c == sum-c){
             cout<<"yes"<<'\n';
            continue;
        }
        cout<<"NO" <<'\n';
        
    }
    return 0;
}