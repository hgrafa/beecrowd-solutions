#include <bits/stdc++.h>
using namespace std;

int main(void){

  for(int i=0;i<=10;i++){

    if( i== 0 or i == 5 or i == 10){
      printf("I=%0.lf J=%0.lf\n", i*0.2, i*0.2+1);
      printf("I=%0.lf J=%0.lf\n", i*0.2, i*0.2+2);
      printf("I=%0.lf J=%0.lf\n", i*0.2, i*0.2+3);
    }else{
      printf("I=%.1lf J=%.1lf\n", i*0.2, i*0.2+1);
      printf("I=%.1lf J=%.1lf\n", i*0.2, i*0.2+2);
      printf("I=%.1lf J=%.1lf\n", i*0.2, i*0.2+3);
    }
  }

  return 0;
}
