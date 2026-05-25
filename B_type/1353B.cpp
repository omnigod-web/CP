//1353B
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n >>k;
        vector<int> a;
        vector<int> b;
        for (int i = 0; i < n; i++)
        {  
            int x;
            cin>>x;
            a.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {  
            int x;
            cin>>x;
            b.push_back(x);
        }
        sort(a.begin() , a.end());
        sort(b.begin() , b.end() , greater<int>());
        int i=0;
        int sum=0;
        while( (a[i] < b[i]) && k--){
              sum+=b[i];
              
              i++;
        }
        while (i< a.size())
        {
            sum+=a[i];
            i++;
        }
        cout<<sum<<'\n';
    }
    return 0;
}