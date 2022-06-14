#include <bits/stdc++.h>
using namespace std;

inline void consulta(int n){
   switch (n){
      case 0:
        puts("PROXYCITY");
        break;
      case 1:
        puts("P.Y.N.G.");
        break;
      case 2:
        puts("DNSUEY!");
        break;
      case 3:
        puts("SERVERS");
        break;
      case 4:
        puts("HOST!");
        break;
      case 5:
        puts("CRIPTONIZE");
        break;
      case 6:
        puts("OFFLINE DAY");
        break;
      case 7:
        puts("SALT");
        break;
      case 8:
        puts("ANSWER!");
        break;
      case 9:
        puts("RAR?");
        break;
      case 10:
        puts("WIFI ANTENNAS");
        break;
   }
}

int main( void ){
  int testes;

  scanf("%d", &testes);

  for(int i=0; i < testes; i++){
    int a, b;

    scanf("%d %d", &a, &b);

    a += b;

    consulta( a );
  }

  return 0;
}
