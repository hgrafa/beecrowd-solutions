#include <bits/stdc++.h>
using namespace std;

int main(){
  int h1, m1, h2, m2;

  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

  int temp1, temp2, temp;

  temp1 = 60*h1+m1;
  temp2 = 60*h2+m2;

  if(temp2-temp1<=0)
    temp = temp2-temp1+1440;
  else
    temp = temp2-temp1;

  int hora, minuto;

  hora = temp/60;
  temp -= 60*hora;

  minuto = temp;

  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora, minuto);

  return 0;
}