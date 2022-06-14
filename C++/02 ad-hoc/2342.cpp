#include <bits/stdc++.h>

using namespace std;

int main(void){
  int r1, a, b, r2;
  char o;

  scanf("%d\n%d %c %d\n", &r1, &a, &o, &b );

  if(o == '+')
    r2 = a+b;
  else if(o == '-')
    r2 = a-b;
  else if(o == '*')
    r2 = a*b;

  if(r1 >= r2)
    puts("OK");
  else
    puts("OVERFLOW");

  return 0;
}
