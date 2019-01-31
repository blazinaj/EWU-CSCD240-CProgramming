
#include <stdio.h>

int main() {
  int c;
  char dummy[10];

  printf("Enter a value:");
  c = getchar();
  while ((getchar()) != '\n');
  while (c != 'q' && c != 'Q'){
    printf("You entered: %c\n", c);
    printf("Enter a value:");
    c = getchar();
    while ((getchar()) != '\n');
  }
  return 0;
}
