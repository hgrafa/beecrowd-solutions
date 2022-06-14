#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n, j=1;

    while( scanf("%d", &n) and n != 0 ){

            int v[n];

            for(int i=0; i < n; i++){
                scanf("%d", &v[i]);
            }

            for(int i=0; i < n; i++){
                if(v[i] == i+1){
                    printf("Teste %d\n", j);
                    printf("%d\n", v[i]);
                }
            }

            j++;
        
            printf("\n");
    }

    return 0;
}
