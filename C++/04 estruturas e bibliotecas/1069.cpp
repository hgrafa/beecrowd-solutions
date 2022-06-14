#include <bits/stdc++.h>
#define out erase
#define pub push_back
#define max
using namespace std;

int main(){
  int testes;

  scanf("%d\n", &testes);
  //getchar();
  for(int u=0; u<testes;u++){
    string praia;
    stack <char> diamante;
    int count=0;

    getline(cin, praia);

    //cout << praia;

    for(int i=0; i < (int)praia.size(); i++){
      if(praia[i] == '<'){
        diamante.push(praia[i]);
      }

      if(!diamante.empty() and praia[i]=='>'){
        diamante.pop();
        count ++;
      }
    }

    printf("%d\n", count);

  }

  return 0;
}