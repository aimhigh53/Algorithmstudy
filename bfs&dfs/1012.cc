#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>


using namespace std;


#define fastio  \
        ios::sync_with_stdio(false);\
        cin.tie(nullptr);\

int testcase;
int row,column;
int cabcount;


struct direct{
    
      int x,y;

}typedef Dir;

Dir moveDir[4]={{0,1},{0,-1},{1,0},{-1,0}};

int arr[51][51];
int dx,dy;
int tmp1,tmp2;

void func(int r,int c){
    arr[r][c]=0;
// cout<<"여기"<<'\n';
    for(int i=0;i<4;i++){
        
        dy=r+moveDir[i].y;
        dx=c+moveDir[i].x;
        
        if (dy >= 0 && dy < column && dx >= 0 && dx < row && arr[dy][dx])
         func(dy, dx);
    }
    
}

void reset() {
   for (int i = 0; i < 51; i++) {
      for (int j = 0; j < 51; j++)
         arr[i][j] = 0;
   }
}


int main(){
    fastio
 
    cin>>testcase;
    
    int total = 0;

    while(testcase>0){
        cin>>row>>column>>cabcount;
        total = 0;
        for(int i=0;i<cabcount;i++){

            cin>>tmp1>>tmp2;           
            arr[tmp2][tmp1]=1;
             
      
        }
        
        for(int i=0;i<column;i++){
            for(int j=0;j<row;j++){
                    if(arr[i][j]){
                         func(i,j);
                        total++;
                    }
            }
        }

        reset();
        testcase--;
        
        cout<<total<<endl;
        
    }
return 0;
}










// int tc;
// int rows,columns,ct;
// int total=0;
// //스텍이 애러임...다시
// void dfs(int r,stack<int>s[]){
//    cout<<"여기111";
// //현 자리가 없으면 아웃
//     if(s[r].empty()){
//         cout<<"여기111";
//         dfs(r-1,s);   
//         return;
//     }
//       cout<<"여기111";
//     // int tempsize=q[r].size();
//     int tmp=s[r].top();
//         s[r].pop();

//         //아래서부터 위로
//         if(!s[r-1].empty()&&s[r-1].top()==tmp){
//   cout<<"여기222";
//             dfs(r-1,s);
//             //연달아서 있는경우
//             // if(s[r-1].top()==tmp||(s[r].top()+1)==tmp){
//             //     dfs(r-1,s);
//             // }   
//         }

//         if(!s[r].empty()&&(s[r].top()+1)==tmp){
//               cout<<"여기222";
//             dfs(r,s);
//         }
//         else if(!s[r].empty()&&!s[r-1].empty()){
//               cout<<"여기333";
//             total++;
//             dfs(r,s);
//         }
//         else if(s[r].empty()&&s[r-1].empty()){
//               cout<<"여기4442";
//             total++;
//             dfs(r-2,s);

//         }
//         // if((q[r].front()+1)==tmp)
//         //     dfs(r,q);
//         //오른쪽->왼쪽
    
    
   

//     // if(v[r+1][c]){
        
//     // }
    
//     // if(v[r-1][c]){
        
//     // }
    
//     // if(v[r][c+1]){
        
//     // }
    
//     // if(v[r][c-1]){

//     // }

    
    

// }

// int main(){
//     fastio

    
    
//     int temp1,temp2;
//     cin>>tc;
    
//     while(tc>0){
//         cin>>rows>>columns>>ct;
//         stack<int>s[rows];
//         cout<<"여dd기";
//         for(int i=0;i<ct;i++){
//             cin>>temp1>>temp2;
//             s[temp1].push(temp2);
//         }
      
//         dfs(rows-1,s);

//         cout<<total<<"\n";
//         total=0;

//     }


//     return 0;
// }