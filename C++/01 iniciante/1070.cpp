#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n, quant=0;
    
    scanf("%d", &n);
    
    while(quant<6){
        if(n%2!=0){
            quant++;
            printf("%d\n", n);
        }
        
        n++;
    }
 
    return 0;
}