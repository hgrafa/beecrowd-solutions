#include <bits/stdc++.h>
using namespace std;

int den, num;

int mdc(int a, int b){
  int vlr = 1;

  if( a < b){
    int temp = a;
    a = b;
    b = temp;
  }

  for(int i=1; i <= abs(b); i++){
    if( b%i == 0 and a%i == 0){
      vlr = i;
    }
  }

  return vlr;
}
// operações
void sum(int n1, int d1, int n2, int d2){
    num = (n1*d2) + (n2*d1);
    den = (d1*d2);
}

void dif(int n1, int d1, int n2, int d2){
    num = (n1*d2) - (n2*d1);
    den = (d1*d2);
}

void mult(int n1, int d1, int n2, int d2){
    num = (n1*n2);
    den = (d1*d2);
}

void divi(int n1, int d1, int n2, int d2){
    num = (n1*d2);
    den = (d1*n2);
}
// fim das operações

int main(void){
    int testes;

    scanf("%d", &testes);

    for(int i = 0; i < testes; i++){
      int n1, n2, d1, d2;
      char op, x;

      scanf("%d %c %d %c %d %c %d", &n1, &x, &d1, &op, &n2, &x, &d2);

      if( op == '+')
        sum( n1, d1, n2, d2);
      else if( op == '-' )
        dif( n1, d1, n2, d2);
      else if( op == '*' )
        mult( n1, d1, n2, d2);
      else if( op == '/' )
        divi( n1, d1, n2, d2);

      int r = mdc(den, num);

      printf("%d/%d = %d/%d\n", num, den, num/r, den/r);
    }

  return 0;
}
