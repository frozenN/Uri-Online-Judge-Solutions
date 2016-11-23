#include <bits/stdc++.h>

using namespace std;

long long int PD[1010][1010];
int tb, tg;
long long mod = 1000000007;

long long int dp(int b, int g){
	
	if(g <= 0) return 0;

	if(b == 1) return  g == 1;

	if(PD[b][g] != -1)
		return PD[b][g];

	return PD[b][g] = ((g * dp(b - 1, g)) % mod + (g * dp(b-1, g-1)) % mod) % mod;
}


int main(){
	memset(PD, -1, sizeof PD);
	while(1){
		int a, b;
		scanf("%d %d", &a, &b);
		if(a+b == 0) break;
		printf("%lld\n", dp(a, b));
	}


}