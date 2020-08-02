#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>


#define fastio\
        ios::sync_with_stdio(false);\
        cin.tie(nullptr);\

using namespace std;

vector<int>v[101];
bool slot[101];
vector<int>countnode;



void dfs(int start){

    
    if(slot[start]) return;
    
    slot[start]=true;
    //cout<<start<<' ';
    countnode.push_back(start);
    
    for(int i=0;i<v[start].size();i++){
            int y=v[start][i];
            dfs(y);
    }

}




int main(){
    fastio

    int count;
    int conn;
    int tmp1,tmp2;
    cin>>count;
    cin>>conn;

    for(int i=0;i<conn;i++){
        cin>>tmp1>>tmp2;
        v[tmp1].push_back(tmp2);
        v[tmp2].push_back(tmp1);
    }

    dfs(1);
    
    cout<<countnode.size()-1;
}

