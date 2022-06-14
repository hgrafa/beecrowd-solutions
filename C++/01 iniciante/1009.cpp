#include <stdio.h>
#include <string.h>

int main() {
    char nome;
    double a, b;

    scanf("%s %lf %lf", &nome, &a, &b);
    printf("TOTAL = R$ %.2lf\n", a+(15*b/100));

    return 0;
}
