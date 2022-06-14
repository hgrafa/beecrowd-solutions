#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, in=0, out=0, num;

  scanf("%d", &n);

  for(int i=0; i<n; i++){
    scanf("%d", &num);
    if(num>=10 and num<=20)
      in++;
    else
      out++;
  }

  printf("%d in\n%d out\n", in, out);

  return 0;
}
