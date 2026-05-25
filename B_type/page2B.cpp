#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
   std:: cin>> t;
    while(t--){
       int n;
       cin>> n;
       int track[2]={0 , 0};

       int a[n];
       for (int i = 0; i < n; i++)
       {
         cin>>a[i];
         if(i%2 != a[i]%2){
            track[a[i]%2]++;
         }
       }
       cout<<(track[0]==track[1] ? track[0] : -1)<<endl;
    }
    return 0;  
}