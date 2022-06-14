#include <bits/stdc++.h>
using namespace std;

int solve(char n){
  int r;

  if(n == '1')
    r = 2;
  else if(n == '7')
    r = 3;
  else if(n == '4')
    r = 4;
  else if(n == '2' or n == '3' or n == '5')
    r = 5;
  else if (n == '6' or n == '9' or n == '0')
    r = 6;
  else
    r = 7;

  return r;
}

int main(void){
  int testes;

  scanf("%d\n", &testes);

  for(int i=0; i < testes; i++){
    string painel;
    long long int led = 0;

    getline(cin, painel);

    for(int j=0; j < painel.size(); j++){
      led += solve(painel[j]);
    }

    printf("%lld leds\n", led);
  }

  return 0;
}
