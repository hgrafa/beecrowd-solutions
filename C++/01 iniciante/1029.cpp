#include <bits/stdc++.h>
using namespace std;

bool triang(int a, int b, int c){
  if( !( abs(b-c) < a and a < c+b) ){
    return false;
  }

  if( !( abs(a-c) < b and b  < a+c) ){
    return false;
  }

  if( !(abs(a-b) < c and c < a+b)){
    return false;
  }

  return true;
}

int main(void){
  int a, b, c, d;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  if( triang(a, b, c) )
    puts("S");
  else if( triang(a, b, d) )
    puts("S");
  else if( triang(a, c, d) )
    puts("S");
  else if( triang(b, c, d) )
    puts("S");
  else
    puts("N");

  return 0;
}
