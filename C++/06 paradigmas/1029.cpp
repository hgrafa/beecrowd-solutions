#include <bits/stdc++.h>
using namespace std;

int call=0;

int fib(int n){

  call++;

  if(n==0){
    return 0;
  }else if(n==1){
    return 1;
  }else{
    return fib(n-1) + fib(n-2);
  }

}

int main(void){
  int testes;

  scanf("%d", &testes);

  for(int i=0; i<testes; i++){
    int num, f;
    scanf("%d", &num);

    f = fib(num);

    printf("fib(%d) = %d calls = %d\n", num, call-1, f);

    call = 0;
  }

  return 0;
}