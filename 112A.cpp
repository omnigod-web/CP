#include <iostream>
#include <algorithm>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{   
   string s1 , s2;
   cin>>s1>>s2;
   for (int i = 0; i < s1.size(); i++)
   {
     if((int) tolower( s1[i] ) < (int)tolower( s2[i])) {
        cout <<"-1";
        return 0;
     }
     else if((int) tolower( s1[i] ) > (int)tolower( s2[i]) ){
        cout <<"1";
        return 0;
     }
   }
    cout<<"0";
    return 0;
}