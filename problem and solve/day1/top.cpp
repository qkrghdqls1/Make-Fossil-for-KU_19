#include<bits/stdc++.h>
using namespace std;
vector<int> v,ans;
stack<int> s;
int main()
{
	
	int n;
	scanf("%d",&n);
	v.resize(n+1);
	ans.resize(n+1);
	for(int i=1;i<=n;i++){
		scanf("%d",&v[i]);
	}
	v[0]=1000000010;
	for(int i=n;i>=0;i--){
		while(!s.empty()&&v[s.top()]<v[i]){
			ans[s.top()]=i;
			s.pop();
		}
		s.push(i);
	}
	s.pop();
	for(int i=1;i<=n;i++)
		printf("%d ",ans[i]);

}
