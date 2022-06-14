#include <bits/stdc++.h>
using namespace std;

int jogos=0, gremio=0, inter=0, empate=0;

void solve(void){
  int a, b;

  scanf("%d %d", &a, &b);

  if(a > b)
    inter++;
  else if(b > a)
    gremio++;
  else
    empate++;

}

int main(void){
  int continua = 1;

  while(continua != 2){

    if(continua == 1){
      solve();
      jogos++;
    }

    puts("Novo grenal (1-sim 2-nao)");


    scanf("%d", &continua);
  }

  printf("%d grenais\n", jogos);
  printf("Inter:%d\n", inter);
  printf("Gremio:%d\n", gremio);
  printf("Empates:%d\n", empate);

  if(inter > gremio)
    puts("Inter venceu mais");
  else if(gremio > inter)
    puts("Gremio venceu mais");
  else
    puts("Nao houve vencedor");

  return 0;
}
