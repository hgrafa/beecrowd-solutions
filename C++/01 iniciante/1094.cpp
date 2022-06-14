#include <bits/stdc++.h>
#define st first
#define nd second

using namespace std;

int main(void){
  int testes;
  double total[4], perc[3];

  scanf("%d", &testes);

  for(int i=0;i<4;i++)
    total[i] = 0;

  for(int i=0;i<testes;i++){
    pair <int, char> animal;

    scanf("%d %c", &animal.st, &animal.nd);

    total[0] += animal.st;

    if( animal.nd == 'C')
      total[1] += animal.st;
    else if( animal.nd == 'R')
      total[2] += animal.st;
    else if( animal.nd == 'S')
      total[3] += animal.st;
  }

  for(int i=0;i<3;i++)
    perc[i] = 100*(total[i+1]/total[0]) ;

  printf("Total: %.0lf cobaias\n", total[0]);
  printf("Total de coelhos: %.0lf\n", total[1]);
  printf("Total de ratos: %.0lf\n", total[2]);
  printf("Total de sapos: %0.lf\n", total[3]);
  printf("Percentual de coelhos: %.2lf", perc[0]);
  puts (" %");
  printf("Percentual de ratos: %.2lf", perc[1]);
  puts (" %");
  printf("Percentual de sapos: %.2lf", perc[2]);
  puts (" %");

  return 0;
}
