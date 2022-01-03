#include <stdio.h>

int power(int, int);

int main() {
  int t;
  t = power(4,-6);
  printf("%d\n", t);
  return 0;
}

int power(int base, int n){
  int i, p;

  p = 1;
  for(i=1; i<=n; ++i)
    p = p * base;

  return p;
}
