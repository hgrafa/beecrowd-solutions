#include <bits/stdc++.h>

using namespace std;

int main(void){

    int linhas;
    scanf("%d", &linhas);

    for(long long int i = 1, j=1; i <= linhas; i++){
      printf("%lld %lld %lld PUM\n", j, j+1, j+2);
      j += 4;
    }

  return 0;
}
