// #include<iostream>
// #include<math.h>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     int count=0;
//     while(t--){
//         int a;
//          int b ;
//          int  c ;
//         cin >> a >> b >> c  ; 
//         int sum= a+b+c;
//         if(sum >=2) count++;
//     }
//     cout<<count;
         
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
     int t;
     cin>>t;
     while(t--){
          
          vector<int> arr;
          int n;
          cin>>n;
          for(int i=1 ;i<=3*n;i++){
             arr.push_back(i);
            }
            int size=arr.size();
            vector<int> result;
           for(int i=0 ;i<n;i++){
             result.push_back(arr[i]);
             result.push_back(arr[size-1]);
             result.push_back(arr[size-2]);
             size=size-2;
            }

            for (auto it:result)
            {
                cout<<it;
            }
            cout<<endl;
            
        }    
       return 0;
    }