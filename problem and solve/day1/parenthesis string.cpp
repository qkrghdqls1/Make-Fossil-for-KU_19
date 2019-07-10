#include<bits/stdc++.h>
using namespace std;
stack<char> s;
char str[1000010];
int main() {
	int k;
	scanf("%d", &k);
	while (k--) {
		int ans = 1;
		scanf("%s", str);
		int l = strlen(str);
		for (int i = 0; i < l; i++) {
			if (str[i] == '(') {
				s.push('(');
			}
			else if (s.empty()) {
				ans = 0;
			}
			else {
				s.pop();
			}
		}
		if (!s.empty())
			ans = 0;
		if (ans) printf("YES\n");
		else printf("NO");
	}
    return 0;
}
