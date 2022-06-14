#include <bits/stdc++.h>
using namespace std;

int main(){
  double v[3], vcop[3];

  for(int i=0;i<3;i++){
    scanf("%lf", &v[i]);
    vcop[i]=v[i];
  }

  sort(v, v+3);

  if(v[0]+v[1]>v[2] and v[1]<v[0]+v[2])
    printf("Perimetro = %.1lf\n", v[0]+v[1]+v[2]);
  else
    printf("Area = %.1lf\n", ((vcop[0]+vcop[1])*vcop[2])/2);

  return 0;
}
