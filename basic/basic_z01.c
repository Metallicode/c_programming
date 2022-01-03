#include <stdio.h>
#include <string.h>

void message(char *);

int main() {
  
  char w[6];
  message(w);
  printf("%s\n", w);
  
  return 0;
}

void message(char *s) {
  strcpy(s, "hello");
}
