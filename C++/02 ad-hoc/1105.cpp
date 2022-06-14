//-----------------------------------------------------------------------
// Richard Mello
// 2018
// Sub-prime
//-----------------------------------------------------------------------

#include <iostream>

//-----------------------------------------------------------------------

using namespace std;

//-----------------------------------------------------------------------

int main() {

 int b, n;
 int reservas[25];

 cin >> b >> n;

 while (b != 0 or n != 0) {

     int d, c, v;
     bool certo = true;

  for (int i = 1; i <= b; i++) cin >> reservas[i];

  for (int i = 1; i <= n; i++) {
   cin >> d >> c >> v;

   reservas[d] -= v;
   reservas[c] += v;
  }

  for (int i = 1; i <= b; i++) if (reservas[i] < 0) certo = false;

        if (certo) cout << "S\n";
        else cout << "N\n";

  cin >> b >> n;
 }

 return 0;
}

//-----------------------------------------------------------------------