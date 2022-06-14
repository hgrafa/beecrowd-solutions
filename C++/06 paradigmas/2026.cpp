//---------------------------------------
//bibliotecas e definições

#include <iostream>
#include <cstring>
#include <algorithm>
#define maxobj 110
#define maxagt 1010
using namespace std;

int cap, nobj, test;
int dp[maxagt][maxobj], p[maxobj], v[maxobj];

int bag(int agt, int obj){

	if(dp[agt][obj] != -1) return dp[agt][obj];

	if(agt == 0 or obj > nobj) return 0;

	int p1 = bag(agt, obj+1);

	if(agt >= p[obj]){
		int p2 = v[obj] + bag(agt-p[obj], obj+1);
		return (dp[agt][obj] = max(p1, p2));
	}else
		return (dp[agt][obj] = p1);

}

int main(void){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> test;

	for(int t=1; t<=test; t++){

		memset(dp, -1, sizeof(dp));

		cin >> nobj >> cap;

		for(int i=1; i<=nobj; i++) cin >> v[i] >> p[i];

		cout << "Galho " << t << ":\n";
		cout << "Numero total de enfeites: " << bag(cap, 1) << "\n\n";
 	
 	}

	return 0;
}

//---------------------------------------
