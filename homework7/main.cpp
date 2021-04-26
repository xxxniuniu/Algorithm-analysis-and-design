#include <stdio.h>
#include <iostream>
#include <algorithm>

using namespace std;

int dp[1005][1005];
int f[1005][1005];
int n,m;
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin>>f[i][j];
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            for(int k=j;k>=0;k--){
                dp[i][j]=max(dp[i][j],dp[i-1][j-k]+f[i][k]);
            }
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}