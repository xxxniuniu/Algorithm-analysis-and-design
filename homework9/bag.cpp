#include<stdio.h>

int f[100][100];

//构造最优矩阵
void package0_1(int *w,int *v,int n,int c)
{
    int i,j;
    //初始化矩阵
    for(i=1;i<=n;i++)
        f[i][0] = 0;
    for(j=1;j<=c;j++)
        f[0][j] = 0;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=c;j++)
        {
            //当容量够放入第i个物品，并且放入之后的价值要比不放大
            if(w[i] <= j && f[i-1][j-w[i]] + v[i] > f[i-1][j])
            {
                f[i][j] = f[i-1][j-w[i]] + v[i];
            }else
                f[i][j] = f[i-1][j];
        }
    }
    printf("最大价值: %d \n",f[n][c]);
}

//构造最优解
void getResult(int n,int c,int *res,int *v,int *w)
{
    int i,j;
    j = c;
    for(i=n;i>=1;i--)
    {
        if(f[i][j] != f[i-1][j])
        {
            res[i] = 1;
            j = j - w[i];
        }
    }
}

int main()
{
    int w[5] = {0,7,3,4,5};//每个物品的重量,第一个为0
    int v[5] = {0,12,8,40,20};//每个物品的价值，第一个为0
    int res[5] = {0,0,0,0,0};
    int n = 4; //物品的个数
    int c = 10; //背包能容的重量
    int i;
    package0_1(w,v,n,c);
    getResult(n,c,res,v,w);
    printf("放入背包的物品为: \n");
    for(i=1;i<=n;i++)
        if(res[i] == 1) printf("%d  ",i);
}