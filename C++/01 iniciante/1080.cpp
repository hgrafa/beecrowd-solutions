#include <bits/stdc++.h>
using namespace std;

int main(void){
  int maior, Pmaior;

  for(int i=0; i<100;i++){
    int num;
    scanf("%d", &num);

    if(i==0){
      maior = num;
      Pmaior=0;
    }

    if(i!=0 and num > maior){
      maior = num;
      Pmaior = i+1;
    }
  }

  printf("%d\n%d\n", maior, Pmaior);

  return 0;
}
