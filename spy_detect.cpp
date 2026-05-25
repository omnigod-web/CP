

//one unique


#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin>>ele;
        arr[i]=ele;
    }
    int i=0, j=1, k=2;
    while(k < arr.size()){
        if(arr[i]==arr[j] && arr[j]==arr[k] && arr[i]==arr[k]){
            i++, j++, k++;
        }
        else{
            if(arr[i]==arr[j]) {
               cout<<k+1 <<'\n'; 
               break;
            }else if (arr[j]==arr[k])
            {
                cout<<i+1 <<'\n'; 
                break;
            }else
            {
                cout<<j+1 <<'\n'; 
                break;
            }    
        }
    }
    }
    
    
    
    return 0;
}