#include <bits/stdc++.h>
using namespace std;

int gdc, num, dem;

int mdc(int x, int y){
  if(y > x){
    int temp;
    temp = x;
    x = y;
    y = temp;
  }

  if (x%y == 0)
    return y;
  else if(y%x == 0)
    return x;
  else
    return mdc(y, x-y);
}

int main(void){
  int a, b, c, d;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  num = (a*d)+(b*c);
  dem = (b*d);

  gdc = mdc(num, dem);

  printf("%d %d\n", num/gdc, dem/gdc);

  return 0;
}
