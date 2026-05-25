#include <bits/stdc++.h>
using namespace std;
class Room{
    private:
        int occ;
        int cap;
    public:
        Room(int a , int b){
            occ=a;
            cap=b;
        }
        bool get_avail(){
            int res=cap - occ;
            if(res<2) return false;
            return true;
        }

};
int main()
{
    int n, count=0;
    cin>>n;
    vector<Room*> rooms;
    for (int i = 1; i <= n; i++)
    {   
        int a , b;
        cin>>a>>b;
        rooms.push_back(new Room(a, b));
    }
    for(auto it: rooms){
        if(it->get_avail()) count++;
    }
    cout<<count;
    return 0;
}