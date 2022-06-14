#include <bits/stdc++.h>
using namespace std;

int main(){
  double sal, nsal;

  scanf("%lf", &sal);

  double aument;

  if(sal>=0 and sal<=400){

    aument = 1.15;
    nsal = aument*sal;

    printf("Novo salario: %.2lf\n", nsal);
    printf("Reajuste ganho: %.2lf\n", nsal-sal);
    puts("Em percentual: 15 %");

  }else if(sal>400 and sal<=800){

    aument = 1.12;
    nsal = aument*sal;

    printf("Novo salario: %.2lf\n", nsal);
    printf("Reajuste ganho: %.2lf\n", nsal-sal);
    puts("Em percentual: 12 %");

  }else if(sal>800 and sal<=1200){

    aument = 1.10;
    nsal = aument*sal;

    printf("Novo salario: %.2lf\n", nsal);
    printf("Reajuste ganho: %.2lf\n", nsal-sal);
    puts("Em percentual: 10 %");

  }else if(sal>1200 and sal<=2000){

    aument = 1.07;
    nsal = aument*sal;

    printf("Novo salario: %.2lf\n", nsal);
    printf("Reajuste ganho: %.2lf\n", nsal-sal);
    puts("Em percentual: 7 %");

  }else{
    aument = 1.04;
    nsal = aument*sal;

    printf("Novo salario: %.2lf\n", nsal);
    printf("Reajuste ganho: %.2lf\n", nsal-sal);
    puts("Em percentual: 4 %");
  }

  return 0;
}