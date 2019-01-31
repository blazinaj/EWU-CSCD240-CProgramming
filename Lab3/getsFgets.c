#include <stdio.h>

int main() {
  char name[25];

  printf("Please enter your name:\n");

  gets(name);

  printf("Your name is %s\n", name);
}
