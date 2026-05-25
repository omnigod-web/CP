#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    cin>>x;
     long long ev_ct=0 , od_ct=0;
    
    if(x%2==0){
       ev_ct = od_ct = x/2;
    }else{
        ev_ct=x/2;
        od_ct=(x/2)+1;
    }
     long long Sum_even= ev_ct * (ev_ct + 1);
     long long Sum_odd= (od_ct * od_ct) * -1;
    cout<<Sum_even+Sum_odd;
    return 0;
}