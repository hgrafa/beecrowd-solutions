#include <bits/stdc++.h>
using namespace std;

int main(void){
  int a, b, c, d;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  if(a*b == c*d)
    puts("0");
  else if(a*b > c*d)
    puts("-1");
  else if(a*b < c*d)
    puts("1");
}
