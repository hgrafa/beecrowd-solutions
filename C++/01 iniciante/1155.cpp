#include <bits/stdc++.h>
using namespace std;

int main(void){

  double sum=0;

  for(double i=1; i <= 100; i++){
    sum += (1/i);
  }

  printf("%.2lf\n", sum);
}
