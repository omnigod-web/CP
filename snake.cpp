#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int row , col;
    cin>>row>>col;
    bool l_to_r=true;
    for (int i = 1; i <= row; i++)
    {   
        int j=1;
        if(i%2){
            while(j<=col){
                cout<<"#";
                j++;
            }
            cout<<'\n';
            continue;
           }else {
                if(l_to_r){
                    while(j<col){
                        cout<<".";
                        j++;
                    }
                    cout<<"#";
                    l_to_r = !l_to_r;
                }else{
                    if(j==1){
                        cout<<"#";
                        j++;
                    }
                    while (j<=col && j>1)
                    {
                        cout<<".";
                        j++;
                    }
                    l_to_r=!(l_to_r);
                }
           }  
           cout<<'\n';
        }
         return 0;
    }
    
   
