#include<bits/stdc++.h>
using namespace std;
int c[101];
int dp[100010];
int main()
{
	//srand(time(NULL));
	//char filename[20];
	//for(int x=0;x<10;x++) {
//		sprintf(filename,"tc1-%d.in",x);
//		freopen(filename,"w",stdout);
		int n, m;// n is number of object, m is maximun 
//		n=rand()%10+1;
//		m=rand()%100000+1;
		scanf("%d %d",&n,&m); //printf("%d %d\n",n,m);
//		c[0]=rand()%5+1;
//		printf("%d ",c[0]);
		for(int i=0;i<n;i++){
//			c[i]=c[i-1]*(rand()%5+1);
			scanf("%d ",&c[i]);
		}
		for(int i=0;i<=m;i++) dp[i]=-1;
		dp[0]=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<=m;j++){
				if(dp[j]!=-1&&j+c[i]<=m){
					if(dp[j+c[i]]==-1) dp[j+c[i]]=dp[j]+1;
					dp[j+c[i]]=min(dp[j+c[i]],dp[j]+1);
				}
			}
		}
//		sprintf(filename,"tc1-%d.out",x);
//		freopen(filename,"w",stdout);
		printf("%d",dp[m]);
//	}

}
