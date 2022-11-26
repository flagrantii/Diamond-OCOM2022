#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    long long int arr[n+2][m+2];
    memset(arr,0,sizeof(arr));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>arr[i][j];
        }
    }
    long long int ans=INT_MIN;
    for(int j=2;j<=m;j++){
        for(int i=1;i<=n;i++){
            arr[i][j] = max(arr[i-1][j-1],max(arr[i+1][j-1],arr[i][j-1]))+arr[i][j];
            ans = max(arr[i][j],ans);
        }
    }
    cout<<ans;

    return 0;
}
