#include<bits/stdc++.h>
using namespace std;

struct mal{
    int x, y;
};

int main(){
    ios:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

    set <int> s;


    for(int i = 0; i < 4; i++){
        s.insert(i);
    }

    if(s.find(3) != s.end()){
        cout<<"Find";
    }

    return 0;
}
