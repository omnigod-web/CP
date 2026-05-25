#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int count=0;
        vector<int> ans;
        for (int i = n-1; i >= 0; i--)
        {
            if(arr[i] >0){
                count++;
                ans.push_back(i+1);
                for (int j = 0; j <=i; j++)
                {
                    arr[j]*=(-1);
                }  
            }
            else continue;
        }
        cout<<count<<endl;
        for(auto it: ans){
            cout<<it<<" ";
        }
         cout<<endl;
        
    }
}