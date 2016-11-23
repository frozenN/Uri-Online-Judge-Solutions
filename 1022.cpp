#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	while(n--)
	{
		int na, da, nb, db;
		char o;
		scanf("%d / %d %c %d / %d", &na, &da, &o, &nb, &db);
		if(o == '+')
		{
			int n = na*db + nb*da;
			int d = da*db;
			cout << n << '/' << d << " = " << n/__gcd(n, d) << '/' << d/__gcd(n,d) << endl;
		}
		else if(o == '-')
		{
			int n = na*db - nb*da;
			int d = da*db;
			if(n > 0 && d > 0 || n < 0 && d < 0)
				cout << n << '/' << d << " = " << n/__gcd(n, d) << '/' << d/__gcd(n,d) << endl;
			else
				cout << '-' << abs(n) << '/' << abs(d) << " = -" << abs(n/__gcd(n, d)) << '/' << abs(d/__gcd(n,d)) << endl;

		}
		else if(o == '*')
		{
			int n = na*nb;
			int d = da*db;
			cout << n << '/' << d << " = " << n/__gcd(n,d) << '/' << d/__gcd(n,d) << endl;
		}
		else
		{
			int n = na*db;
			int d = nb*da;
			cout << n << '/' << d << " = " << n/__gcd(n,d) << '/' << d/__gcd(n,d) << endl;
		}
	}
}