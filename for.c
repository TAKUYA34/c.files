#include <stdio.h>

int main(void) {
  int a = 9;
  int b = 9;
  int c = a * b;

  for (int i = 0; i < a; i++){
    for (int i = 0; i < b; i++)
    {
      printf("%d\n", i);
    }
    printf("%d\n", i);
  }
  
}