#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int weight;
    cout<<"enter weight W" << endl;
    cin>>weight;
    if(weight%2==0 && weight >2) cout<<"YES";
    else cout<<"NO";
    return 0;
}