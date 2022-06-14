#include <bits/stdc++.h>

using namespace std;

int main(void){
  int num;

  while(scanf("%d", &num) and num != 0){

    for(int i=1; i <= num; i++){

      if(i == num)
        printf("%d\n", i);
      else
        printf("%d ", i);
    }

  }

  return 0;
}
