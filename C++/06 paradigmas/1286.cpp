//----------------------------------------

#include <iostream>
#include <cstring>
#include <algorithm>
#define maxaguenta 50
#define maxobjetos 50
using namespace std;

//----------------------------------------
// variáveis globais

int capacidade, Nobj;
int dp[maxaguenta][maxobjetos], p[maxobjetos], v[maxobjetos];

//----------------------------------------
// função da bag

int bag(int agt, int obj){

	if(dp[agt][obj] != -1) return dp[agt][obj];

	if(agt == 0 or obj > Nobj) return 0;

	int p1 = bag(agt, obj+1);

	if(agt >= p[obj]){
		int p2;
		p2 = v[obj] + bag(agt-p[obj], obj+1);
		return (dp[agt][obj] = max(p1, p2));
	}else 
		return (dp[agt][obj] = p1);

}

//----------------------------------------
// fuñção principal

int main(void){


	while(cin >> Nobj){
		if(not Nobj) break;

		cin >> capacidade;

		for(int i=1; i<=Nobj; i++) cin >> v[i] >> p[i];

		memset(dp, -1, sizeof(dp));


		cout << bag(capacidade, 1) << " min.\n";	
	}

	return 0;
}

//----------------------------------------
