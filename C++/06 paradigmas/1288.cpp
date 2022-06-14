//-------------------------------------------
// bibliotecas e declarações

#include <iostream>
#include <cstring>
#include <algorithm>
#define maxagt 110
#define maxobj 70
using namespace std;

//-------------------------------------------
// variáveis globais

int cap, nobj, test, cast;
int dp[maxagt][maxobj], p[maxobj], v[maxobj];

//-------------------------------------------
// função da knapsack

int bag(int agt, int obj){

	if(dp[agt][obj] != -1) return dp[agt][obj];

	if(agt == 0 or obj > nobj) return 0;

	int p1 = bag(agt, obj+1);

	if(agt >= p[obj]){
		int p2 = v[obj] + bag(agt - p[obj], obj+1);
		return (dp[agt][obj] = max(p1, p2));
	}else 
		return (dp[agt][obj] = p1);
}

//-------------------------------------------
// função da mainha

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> test;

	for(int t=0; t<test; t++){

		memset(dp, -1, sizeof(dp));

		cin >> nobj;

		for(int i=1; i<=nobj; i++) cin >> v[i] >> p[i];

		cin >> cap >> cast;

		if(bag(cap, 1) >= cast) cout << "Missao completada com sucesso\n";
		else cout << "Falha na missao\n";
	}

	return 0;
}
//-------------------------------------------
