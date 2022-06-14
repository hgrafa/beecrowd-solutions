#include <iostream>
#include <cmath>
using namespace std;

int main(){
  double a, b, c, d, r;

  cin >> a >> b >> c >> d;

  r = sqrt((a-c)*(a-c)+(b-d)*(b-d));

  cout.precision(4);
  cout.setf(ios::fixed);

  cout << r << "\n";
}
