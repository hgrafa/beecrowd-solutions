#include <bits/stdc++.h>
using namespace std;

int main(){
  string tipo1, tipo2, tipo3;

  getline(cin, tipo1);

  if(tipo1 == "vertebrado"){ // tipo 1
    getline(cin, tipo2);

      if(tipo2 == "ave"){ // tipo 2
          getline(cin, tipo3);

            if(tipo3 == "carnivoro"){
              puts("aguia");
            }else if(tipo3 == "onivoro"){
              puts("pomba");
            }

      }else if(tipo2 == "mamifero"){ // tipo 2
        getline(cin, tipo3);

          if(tipo3 == "onivoro"){
            puts("homem");
          }else if(tipo3 == "herbivoro"){
            puts("vaca");
          }
      }
  }else if(tipo1 == "invertebrado"){ //tipo 1
    getline(cin, tipo2);

    if(tipo2 == "inseto"){ //tipo 2
        getline(cin, tipo3);

          if(tipo3 == "hematofago"){
            puts("pulga");
          }else if(tipo3 == "herbivoro"){
            puts("lagarta");
          }

    }else if(tipo2 == "anelideo"){ // tipo 2
      getline(cin, tipo3);

        if(tipo3 == "hematofago"){
          puts("sanguessuga");
        }else if(tipo3 == "onivoro"){
          puts("minhoca");
        }
      }
    }

    return 0;
  }
