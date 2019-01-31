# include <stdio.h>

int main(){
  int a = 3;
  int b = 4;
  double c = ++a + b++;
  int size = sizeof(c/a);

  printf("a is %d\n", a);
  printf("b is %d\n", b);
  printf("c is %f\n", c);
  printf("size is %d\n", size);

  return 0;
}
