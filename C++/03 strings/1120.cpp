#include <iostream>

using namespace std;

int main(void){
  ios_base::sync_with_stdio(false);

  int n;
  string a;

  while(cin >> n >> a and n != 0 and a != "0"){
    bool vazio = true;// se nenhum for diferente do proibido
    bool tudozero = true;
    bool aindazero = true;

    int v[a.size()];

    for(int i=0; i<a.size(); i++){
      v[i] = (a[i] - 48);
      // cout << v[i];
    }

    // cout << "\n";

    for(int i=0; i<a.size(); i++){
      if(v[i] != n){
        vazio = false; //algum é diferente do proibido
        
        if(v[i] != 0) tudozero = false;     
      }
    }

    if(vazio == true){
      cout << "0\n";
      continue;
    }

    if(tudozero){
      cout << "0\n";
      continue;
    }

    for(int i=0; i<a.size(); i++){
      if(v[i] != n ){
        if(v[i] != 0 && aindazero) aindazero = false;
        
        if(not aindazero) cout << v[i];
      }
    }

    cout << "\n";

  }

  return 0;
}