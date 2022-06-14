//--------------------------------
//bibliotecas e definições

#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <string>
#define maxn 100
using namespace std;

//--------------------------------
//variáveis globais

int dp[maxn][maxn];
string s1, s2;

//--------------------------------
//função da lcs

int lcs(string a, string b){
	int tam1 = a.size(), tam2 = b.size();

	for(int i=0; i<=tam1; i++){
		for(int j=0; j<=tam2; j++){
			if(i == 0 or j == 0)
				dp[i][j] = 0;
			else if( a[i-1] != b[j-1])
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			else 
				dp[i][j] = dp[i-1][j-1]+1;
		}
	}

	return dp[tam1][tam2];
}

//--------------------------------
// função de main

int main(void){
	ios_base::sync_with_stdio(false);
	// cin.tie(NULL);

	while(getline(cin, s1) and getline(cin, s2)){

		memset(dp, 0, sizeof(dp));

		cout << lcs(s1, s2) << "\n";

	}

	return 0;
}

//--------------------------------
