#include <iostream>
using namespace std;
const int maxn=1e5+10;

int value1[maxn],n,x;
int binary_search(int num)
{
    int l=1,r=n;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(value1[mid]<num) l=mid+1;
        else if(value1[mid]>num) r=mid-1;
        else return mid;
    }
    return 0;
}
int force_search(int num)
{
    for(int i=1;i<=n;i++){
        if(value1[i]==num){
            return i;
        }
    }
    return 0;
}
int main()
{
    cout<<"请输入数字个数和要查找的数字:";
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        scanf("%d",&value1[i]);
    }
    cout<<binary_search(x)<<endl;
    cout<<force_search(x)<<endl;
    return 0;
}