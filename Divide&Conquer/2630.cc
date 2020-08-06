#include<bits/stdc++.h>

using namespace std;


  

#define fastio  \
        ios::sync_with_stdio(false);\
        cin.tie(nullptr);           \


//vector<vector<int> >arr;
int arr[129][129];
//이럴필요가 없는게 128까지만 있으니 

int b,w;



void checkAround(int num,int s,int e){
        
    int color=arr[s][e];
    //인덱싱을 잘 하지못했음
    //시작 파라미터를 잡아주면 된다는 생각을 하자!

    for(int i=s;i<s+num;i++){
        for(int j=e;j<e+num;j++){

            if(arr[i][j]!=color){

                 checkAround(num/2,s,e);
                 checkAround(num/2,s+num/2,e);
                 checkAround(num/2,s,e+num/2);
                 checkAround(num/2,s+num/2,e+num/2);
                 return;

            }
        }
    }
    if(color==1){
        b++;
    }
    else{
        w++;
    }

}





int main(){
    fastio

  
    int num=0;

    cin>>num;

    for(int i=0;i<num;i++)
        for(int j=0;j<num;j++)
            cin>>arr[j][i];
    
    checkAround(num,0,0);
  
    //재귀로 주변을 check하자
    cout<<w<<endl;
    cout<<b<<endl;
    //파란색 색종이

    //흰색 색종이
}

