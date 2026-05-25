#include <bits/stdc++.h>
using namespace std;

void cal_tar(int &res , int i , int j){
    if(i>=0 && j<=9 && i<=9 && j>=0){
        if(i>=1 && j<=8 && i<=8 && j>=1){
            if (i>=2 && j<=7 && i<=7 && j>=2)
            {
                if(i>=3 && j<=6 && i<=6 && j>=3){
                    if(i>=4 && j<=5 && i<=5 && j>=4){
                        res+=5;
                    }
                    else res+=4;
                }else res+=3;
            }else res+=2;
            
        }else res+=1;
    }
}
int main()
{
    int t;
    cin>>t;
    int count=10;
    while(t--){
        int res=0;
        vector<string> board;
        for (int i = 0; i < count; i++)
        {
            string str;
            cin>>str;
            board.push_back(str);
        }
        for (int i = 0; i < count; i++)
        {
            for (int j = 0; j < count; j++)
            {
                if(board[i][j]=='X'){
                     cal_tar(res , i , j);
                }
            }
            
        }
        cout<<res<<endl;
    }

    return 0;
}