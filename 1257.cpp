#include <bits/stdc++.h>

using namespace std;

int main(){
	int t, index = 0;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long hash = 0;
		string a;
		for(int i = 0; i < n; ++i)
		{
			cin >> a;
			for(int j = 0; j < a.size(); ++j)
			{
				hash += (a[j] - 'A') + i + j;
			}
		}
		printf("%lld\n",hash);
	}
}