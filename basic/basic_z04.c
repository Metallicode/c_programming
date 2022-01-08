#include <stdio.h>

void bin(unsigned n);

int main() {
  
  bin(1112);
  return 0;
}

void bin(unsigned n)
{
    unsigned i;
    for (i = 1 << 31; i > 0; i = i / 2)
        (n & i) ? printf("1") : printf("0");
}


