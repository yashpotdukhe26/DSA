#include<iostream>
#include<vector>
using namespace std;

int main(){ 

    cout<<"enter the items count";
    int N,W;
    cin>>N;
    cout<<"enter the capacity";
    cin>>W;
    vector<int>values[N];
    vector<int>weight[N];

    vector<vector><int>> dp(N+1,vector<int>(W+1,0));

            cout<<"enter the items";
            for(int i=0; i<N; i++){
                 cin>>values[i];
            }
            cout<<"enter the values";
            for(int i=0; i<n; i++){
                cin>>weight[i]
             }

  for(int i=0; i<N; i++){
    for(int w=0; w<=W; w++){
        if(weight[i-1]<=w){
            dp[i][w] =max(dp[i-1] [w], values[i-1] + dp[i-1] [w-weight[i-1]]);
        }else{
            dp[i][w] =dp[i-1][w];
        }
    }
  }
  

cout<<dp[N][W];


    return 0;
}