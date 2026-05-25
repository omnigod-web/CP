#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int zero_count=0;
    for(int i=0 ; i<n; i++){
        cin>>a[i];
    }
    long long prod=1;
    int exp=0;
    for(int i=0 ; i<n; i++){
       if(a[i] ==-1 || a[i]==1){
        prod*=a[i];
       }else{
             if(a[i]!=0){
                exp+=abs(abs(a[i]) - 1);
                if(a[i]<0) {
                    a[i]=-1;
                    prod*=a[i];
                }else if(a[i]>0){
                    a[i]=1;
                    prod*=a[i];
                }
             }else{
                exp+=1;
                zero_count++;
             }
             
       } 
    }
    if(prod==-1 && zero_count==0){
        cout<<exp;
    }else if(prod==-1){
         cout<<exp+2;
    }else cout<<exp;

    return 0;
}