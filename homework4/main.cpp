#include <iostream>
using namespace std;
const int maxn=10e5;
int data[maxn];
void Merge(int num[],int l,int mid,int r){
    int llen=mid-l+1;
    int rlen=r-mid;
    int lnum[llen],rnum[rlen];
    for(int i=l;i<=mid;i++)
        lnum[i-l]=num[i];
    for(int i=mid+1;i<=r;i++)
        rnum[i-mid-1]=num[i];
    int i=0,j=0,len=l;
    while(i<llen&&j<rlen)
    {
        if (lnum[i]<=rnum[j]) num[len++]=lnum[i++];
        else num[len++]=rnum[j++];
    }
    while(i<llen)
        num[len++]=lnum[i++];
    while(j<rlen)
        num[len++]=rnum[j++];
}
void MergeSort(int num[],int l,int r){
    if(l<r)
    {
        int mid=(l+r)/2;
        MergeSort(num,l,mid);
        MergeSort(num,mid+1,r);
        Merge(num,l,mid,r);
    }
}
int main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++) cin >> data[i];
    MergeSort(data,1,n);
    for(int i=1;i<=n;i++) cout << data[i] << " ";
    return 0;
}