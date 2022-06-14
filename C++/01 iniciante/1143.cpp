#include <bits/stdc++.h>
using namespace std;

int main(void){
  int linhas;

  scanf("%d", &linhas);

  for(int i=1; i <= linhas; i++){
    printf("%d %d %d\n", i, i*i, i*i*i);
  }

  return 0;
}
