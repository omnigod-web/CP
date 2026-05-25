#include<bits/stdc++.h>
using namespace std;

int main(){
       vector<vector<int>> matrix;
       for (int i = 0; i < 5; i++)
       {
          vector<int> row(5);
          for (int j = 0; j < 5; j++)
          {
            cin>>row[j];
         }
         matrix.push_back(row);
       }
       for (int i = 0; i < 5; i++)
       {
          for (int j = 0; j < 5; j++)
          {
            cout<<matrix[i][j]<<" ";
            if(matrix[i][j]==1){
               int steps = abs(2-i) + abs(2-j);
               cout<<steps<<endl;
               return 0;
            }
          }
          cout<<endl;
       }
       
       return 0;
    }