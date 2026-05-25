#include <bits/stdc++.h>
using namespace std;
// bool composite(int a){
//     for(int i=2 ; i*i <= a ;i++){
//         if(a%i==0){
//             return true;
//         }
//     }
//     return false;
// }
int main()
{
    int n;
    cin>>n;
    int A[n];
    set<int> com;
    for(int i=0; i<n; i++){
        cin>>A[i];
        if(com.find(A[i])==com.end()) com.insert(A[i]);
    }
    int m;
    cin>>m;
    int B[m];
     for(int i=0; i<m; i++){
        cin>>B[i];
        if(com.find(B[i])==com.end()) com.insert(B[i]);
    }
     for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int sum=A[i]+B[j];
            if(com.find(sum) == com.end()){
                cout<<A[i]<<" "<<B[j];
                return 0;
            }
        }
    }
   

    return 0;
}