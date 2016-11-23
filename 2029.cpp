#include <bits/stdc++.h>

using namespace std;


int main(){
  double v, d;
  while(cin >> v >> d)
  {
    double a = (d/2.)*(d/2.) * 3.14;
    // v = a * h , h = v / a
    printf("ALTURA = %.2lf\nAREA = %.2lf\n", v/a, a);
  }

}
