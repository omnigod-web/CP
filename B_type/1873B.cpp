#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        long long int min_num = INT_MAX;
        long long prod=1;

        for(int i = 0; i < n; i++){
            long long x;
            cin>>x;
            if(x==0){
                count++;
                min_num=0;
            }
            else{
                prod*=x;
                min_num = min(min_num  , x);
            }
        }
        if(count>1){
            cout<<prod * 0<<endl;
        }else{
            if(min_num!=0){
                cout<<(prod=(prod/min_num)*(min_num+1))<<endl;
            }else{
                cout<<prod * (min_num+1)<<endl;
            }
        }  
    }
    return 0;
}