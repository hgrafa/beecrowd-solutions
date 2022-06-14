#include <bits/stdc++.h>

int main(){
  double n;

  scanf("%lf", &n);

  if(n>=0 and n<=25)
    printf("Intervalo [0,25]\n");
  else if(n>25 and n<=50)
    printf("Intervalo (25,50]\n");
  else if(n>50 and n<=75)
    printf("Intervalo (50,75]\n");
  else if(n>75 and n<=100)
    printf("Intervalo (75,100]\n");
  else
    printf("Fora de intervalo\n");

    return 0;
}