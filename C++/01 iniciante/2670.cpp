#include <stdio.h>
#include <stdlib.h>

int main(){
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  int temp1, temp2, temp3;
  temp1= 2*b+4*c;
  temp2= 2*a+2*c;
  temp3= 2*b+4*a;

  if(temp1>temp3 && temp2>temp3)
    printf("%d\n", temp3);
  else if(temp2>temp1 && temp3>temp1)
    printf("%d\n", temp1);
  else
    printf("%d\n", temp2);

  return 0;
}
