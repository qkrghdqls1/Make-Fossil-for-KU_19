#include<bits/stdc++.h>
using namespace std;
int w[1111];
int v[1111];
int dp[100010];
int main()
{
	int n, m;// n is number of object, m is maximun 
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d %d",&w[i],&v[i]);
	}
	for(int i=0;i<=m;i++)dp[i]=0;
	for(int i=0;i<n;i++)
		for(int j=m;j>=0;j--){
			if(j+w[i]<=m)
				dp[j+w[i]]=max(dp[j+w[i]],dp[j]+v[i]);
		}
	int ans=0;
	for(int i=0;i<=m;i++) ans=max(ans,dp[i]);
	printf("%d",ans);
}
