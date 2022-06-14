#include <bits/stdc++.h>
using namespace std;

double media;

int main(){
  double a, b, c, d, r;
  scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

  media = (2*a + 3*b + 4*c + d)/10;

  r = media;

  if (media>=7) {
    printf("Media: %.1lf\n", r);
    printf("Aluno aprovado.\n");

  } else if (media<5) {
    printf("Media: %.1lf\n", r);
    printf("Aluno reprovado.\n");

  } else {

    double rec;
    scanf("%lf", &rec);

    media = (media+rec)/2;

    printf("Media: %.1lf\n", r);
    printf("Aluno em exame.\n");
    printf("Nota do exame: %.1lf\n", rec);

    if(media >= 5){
      printf("Aluno aprovado.\n");
      printf("Media final: %.1lf\n", media);
    }else{
      printf("Aluno reprovado.\n");
      printf("Media final: %.1lf\n", media);
    }
  }

  return 0;
}