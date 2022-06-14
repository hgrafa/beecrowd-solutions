  #include <stdio.h>

  int main(){
    int n, s;
    double h;
    
    scanf("%d %d %lf", &n, &s, &h);
    
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$ %.2lf\n", s*h);

    return 0;
  }
