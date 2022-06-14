//---------------------------------------
//  Hugo Rafael de Lima
//  Contest OBI ITA
//  problema dos canos (mochila)
//---------------------------------------
// bibliotecas e definições

#include <iostream>
#include <algorithm>
#include <cstring>

#define maxobj 1010
#define maxnagt 2010

using namespace std;

//---------------------------------------
// variáveis globais

int dp[maxnagt][maxobj], p[maxobj], v[maxobj];
int nobj, cap;

//---------------------------------------

int bag(int agt, int obj){

	if(dp[agt][obj] != -1) return dp[agt][obj];

	if(agt == 0 or obj > nobj) return 0; 

	int c1 = bag(agt, obj+1);

	if(agt >= p[obj]){
		int c2, c3, best;

		c2 = v[obj] + bag(agt-p[obj], obj+1);
		c3 = v[obj] + bag(agt-p[obj], obj);

		best = max(c2, c3);

		return dp[agt][obj] = max(best, c1);
	}else return dp[agt][obj] = c1;
}

//---------------------------------------

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	memset(dp, -1, sizeof(dp));

	cin >> nobj >> cap;

	for(int i=1; i<=nobj; i++) cin >> p[i] >> v[i];

	cout << bag(cap, 1) << "\n";

	return 0;
}

//---------------------------------------
