#include <bits/stdc++.h>
using namespace std;
char str[500010];
deque<char> dq;
int main()
{
	int tCase;
	char val;
	scanf("%d", &tCase);
	for (int i = 0; i < tCase; i++)
	{
		scanf("%s",str);
		int l = strlen(str);
		for(int i=0;i<l;i++){
			val=str[i];
			if (dq.empty())
				dq.push_front(val);
			else if (dq.front() < val)
				dq.push_back(val);
			else
				dq.push_front(val);
		}
		while(!dq.empty())
		{
			printf("%c", dq.front());
			dq.pop_front();
		}
		printf("\n");
	}
}


