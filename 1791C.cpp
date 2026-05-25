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
       int num_ev=n/2;
       if((num_ev)%2){
        cout<<"NO"<<endl;
        continue;
       }else{
        int sum_ev=0;
        int sum_odd=0;
        cout<<"yes"<<endl;
          for(int i=1 ; i<=num_ev ; i++){
              sum_ev+=i*2;
              cout<<i*2<<" ";
          }
          int start=1;
          for(int i=1 ; i<num_ev ; i++){
              sum_odd+=start;
              
              cout<<start<<" ";
              start+=2;
          }
          cout<<sum_ev-sum_odd <<endl;
       }
    }
       
    
    return 0;
}