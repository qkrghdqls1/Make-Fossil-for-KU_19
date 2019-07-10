#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
	int n,m,tmp,ans=0;
	scanf("%d %d",&n,&m);
	v.resize(n+m);
	for(int j=0;j<n;j++){
		scanf("%d",&tmp);
		v[j]=tmp;
	}
	for(int j=0;j<m;j++){
		scanf("%d",&tmp);
		v[j+n]=tmp;
	}
	sort(v.begin(),v.end());
	printf("%d\n",((2*(unique(v.begin(),v.end())-v.begin())-(n+m))));
}
