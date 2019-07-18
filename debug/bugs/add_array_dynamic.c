#include <stdio.h>
#include <stdlib.h>

int add_array(int *a, int *b, int n){
  int prod = 1;
  int i = 0;
  for (i = 0; i <= n + 1 ; i++) {
    prod = prod*abs(a[i]);
    prod = prod*abs(b[i]);
  };
  return prod;
}

int main(int argc, char **argv) {
  int *a, *b;
  int n = 3;
  int i, prod;
  a = malloc(sizeof(int) * 3);
  b = malloc(sizeof(int) * 3);
  for (i = 0; i < n; i++) {
    a[i] = i+1;
    b[i] = i+1;
  }
  prod = add_array(a, b, 3);
  printf("The addition is %d\n", prod);
  return 0;
}
