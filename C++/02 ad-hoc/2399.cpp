#include <bits/stdc++.h>
#define max 100
using namespace std;

int main(void){
  int tamanho;

  scanf("%d", &tamanho);

  vector <int> v (max ,0);

  for(int i=0; i< tamanho; i++)
    scanf("%d", &v[i]);

  for(int i=0; i < tamanho; i++){
    if( i == 0){
      printf("%d\n", v[i] + v[i+1]);
    }else if(i == tamanho-1){
      printf("%d\n", v[i-1] + v[i]);
    }else{
      printf("%d\n", v[i-1] + v[i] + v[i+1]);
    }
  }
}
