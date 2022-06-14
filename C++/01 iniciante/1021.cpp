#include <bits/stdc++.h>
using namespace std;

int main(void){
  double vlr;

  scanf("%lf", &vlr);

  int n100, n50, n20, n10, n5, n2;

  n100 = vlr/100;
  vlr -= 100*n100;

  n50 = vlr/50;
  vlr -= 50*n50;

  n20 = vlr/20;
  vlr -= 20*n20;

  n10 = vlr/10;
  vlr -= 10*n10;

  n5 = vlr/5;
  vlr -= 5*n5;

  n2 = vlr/2;
  vlr -= 2*n2;

  int m100, m50, m25, m10, m5;
  vlr *= 100;

  m100 = vlr / 100;
  vlr -= 100*m100;

  m50 = vlr / 50;
  vlr -= 50*m50;

  m25 = vlr / 25;
  vlr -= 25*m25;

  m10 = vlr / 10;
  vlr -= 10*m10;

  m5 = vlr / 5;
  vlr -= 5*m5;

  puts("NOTAS:");
  printf("%d nota(s) de R$ 100.00\n", n100);
  printf("%d nota(s) de R$ 50.00\n", n50);
  printf("%d nota(s) de R$ 20.00\n", n20);
  printf("%d nota(s) de R$ 10.00\n", n10);
  printf("%d nota(s) de R$ 5.00\n", n5);
  printf("%d nota(s) de R$ 2.00\n", n2);
  puts("MOEDAS:");
  printf("%d moeda(s) de R$ 1.00\n", m100);
  printf("%d moeda(s) de R$ 0.50\n", m50);
  printf("%d moeda(s) de R$ 0.25\n", m25);
  printf("%d moeda(s) de R$ 0.10\n", m10);
  printf("%d moeda(s) de R$ 0.05\n", m5);
  printf("%.0lf moeda(s) de R$ 0.01\n", vlr);

  return 0;
}
