//lucky ticket
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
       int arr[n];
       int temp=0;
       int longest=0;
       for (int i = 0; i < n; i++)
       { 
            cin>>arr[i];
       }
       for (int i = 0; i < n; i++)
       { 
            if(arr[i]==0){
                temp++;
                longest=max(temp , longest);
            }else{
                temp=0;
            }
       }
       cout<< longest <<endl;
    }
    
    return 0;
}