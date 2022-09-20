#include <iostream>
#include <algorithm>

using namespace std;

int main( void ){

  double a, b, c;

  cin >> a >> b >> c;

  if(b > a && b > c) swap(a, b);
  else if ( c > a && c > b ) swap(a, c);

  if(c > b) swap(b, c);

  if(a >= b + c) {
    cout << "NAO FORMA TRIANGULO" << endl;
    return 0;
  }

  if(a*a == b*b + c*c) {
    cout << "TRIANGULO RETANGULO" << endl;
  } else if (a*a > b*b + c*c) {
    cout << "TRIANGULO OBTUSANGULO" << endl;
  } else {
    cout << "TRIANGULO ACUTANGULO" << endl;
  }

  if(a == b && b == c) {
    cout << "TRIANGULO EQUILATERO" << endl;
  } else if (a == b || b == c || a == c){
    cout << "TRIANGULO ISOSCELES" << endl;
  }

  return 0;
}
