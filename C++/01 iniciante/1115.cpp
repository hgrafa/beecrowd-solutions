#include <bits/stdc++.h>

using namespace std;

int main(void){
  int a, b;

  while( scanf("%d %d", &a, &b) and a != 0 and b != 0){
    if(a > 0 and b > 0)
      puts("primeiro");
    else if(a < 0 and b > 0)
      puts("segundo");
    else if(a < 0 and b < 0)
      puts("terceiro");
    else if(a > 0 and b < 0)
      puts("quarto");
  }

  return 0;
}
