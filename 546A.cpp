#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k , n, w;
    cin>>k>>n>>w;
    int exp_cost=0;
    for (int i = 1; i <= w; i++)
    {
        exp_cost+=i*k;
    }
    if(exp_cost>n)cout<<exp_cost-n;
    else cout<<0;
    return 0;
}