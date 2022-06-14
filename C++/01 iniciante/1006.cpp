  #include <stdio.h>

  int main(){
    double a, b, c, d;

    scanf("%lf %lf %lf", &a, &b, &d);
    c = (2*a+3*b+5*d)/10;
    printf("MEDIA = %.1lf\n", c);

    return 0;
  }
