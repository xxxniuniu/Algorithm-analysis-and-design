#include <iostream>
#include <algorithm>

using namespace std;
const int MAX=1005;

int dp1[MAX][MAX];
int flag[MAX][MAX];


int sum=0; //表示所有任务的时间总和
int n; //表示任务总数
int t[MAX]; //表示各个任务需要的时间
int ans[MAX]; //记录任务被安排在哪台机器上

//  二维数组dp[i][j] ：当背包重量刚好为j的时候，前i个物品任意组合放进背包所获得的价值最大
//  状态转移方程：dp[i][j] = max(dp[i-1][j],dp[i-1][j-wi]+vi)
//      前者：放弃物品i
//      后者：放入物品i，占据了wi的重量，价值为前i-1个物品在j-wi的空间内所能获得的最大价值

int main()
{
    memset(dp1,0,sizeof dp1);
    memset(flag,0,sizeof flag);
    printf("请输入任务总数：");
    cin>>n;
    printf("请输入各个任务所需要耗费的时间：");
    for(int i=1;i<=n;i++){
        cin>>t[i];
        sum+=t[i];
    }
    int V=sum/2;

    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=V;j++)
        {
            if (j>=t[i])
            {
                if (dp1[i][j] < dp1[i-1][j-t[i]]+t[i])
                {
                    dp1[i][j] = dp1[i-1][j-t[i]]+t[i];
                    flag[i][j] = 1;
                }else{
                    dp1[i][j] = dp1[i-1][j];
                }
            }else{
                dp1[i][j] = dp1[i-1][j];
            }
            printf("%d ",dp1[i][j]);
        }
        printf("\n");
    }
    for(int i=n,j=V;i>=1&&j>0;i--){
        if(flag[i][j] == 1){
            ans[i]=1;
            j-=t[i];
        }
    }
    cout<<"总时间:";
    cout<< max(dp1[n][V],(sum-dp1[n][V]))<<endl;
    cout<<"调度方案:"<<endl;
    for(int i=1;i<=n;i++){
        cout<<"任务:"<<i<<" "<<"机器:"<<ans[i]+1<<endl;
    }
}