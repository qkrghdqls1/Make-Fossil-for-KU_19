#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> ans_mi,ans_ma;
deque<int> mi,ma;
int main()
{
	int n =	1000;
	int k = n;
	scanf("%d %d",&n,&k);
	v.resize(n);
	ans_mi.resize(n);
	ans_ma.resize(n);
	for(int i=0;i<n;i++){
		scanf("%d",&v[i]);
	}
	mi.push_back(v[0]);
	ma.push_back(v[0]);
	for(int i=1;i<k;i++){
		while(mi.size()&&mi.back()>v[i]) mi.pop_back();
		while(ma.size()&&ma.back()<v[i]) ma.pop_back();
		mi.push_back(v[i]);
		ma.push_back(v[i]);
	}
	ans_mi[0]=mi.front();
	ans_ma[0]=ma.front();
	for(int i=k;i<n;i++){
		if(mi.front()==v[i-k]) mi.pop_front();
		if(ma.front()==v[i-k]) ma.pop_front();
		while(mi.size()&&mi.back()>v[i]) mi.pop_back();
		while(ma.size()&&ma.back()<v[i]) ma.pop_back();
		mi.push_back(v[i]);
		ma.push_back(v[i]);
		ans_mi[i-k+1]=mi.front();
		ans_ma[i-k+1]=ma.front();
	}
	while(!mi.empty()) mi.pop_back();
	while(!ma.empty()) ma.pop_back();
	for(int i=0;i<n-k+1;i++)
		printf("%d ",ans_mi[i]);
	printf("\n");
	for(int i=0;i<n-k+1;i++)
		printf("%d ",ans_ma[i]);
}
