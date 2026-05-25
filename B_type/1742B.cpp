#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int> st;
        bool dup=false;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            if(st.find(x) != st.end()){
                dup=true;
            }else{
                st.insert(x);
            }
        }
        cout<<(dup?"NO":"yes")<<'\n';
    }
    return 0;
}