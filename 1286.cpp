#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define MAX 100

int rpd[MAX][MAX]; 
int lucro[MAX]; 
int peso[MAX]; 
int quantidade;

int ks01(int it, int pres) 
{
    if(it == quantidade) return 0;
    if(rpd[it][pres] == -1) 
    {
        rpd[it][pres] = ks01(it+1,pres); 
        if(peso[it] <= pres) 
        {
            rpd[it][pres] = max(rpd[it][pres], lucro[it] + ks01(it+1, pres - peso[it]));
        }
    }
    
    return rpd[it][pres]; 
}

int main(){
    //whatever
    while(1){
        memset(rpd, -1, sizeof rpd);
        int pmax;
        cin >> quantidade;
        int n = quantidade;     
        if(!n) break;
        cin >> pmax;
        for(int i = 0; i < n; ++i){
            scanf("%d %d", &lucro[i], &peso[i]);
        }
        printf("%d min.\n", ks01(0, pmax));
    }
}