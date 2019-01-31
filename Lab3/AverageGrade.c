#include <stdio.h>

int main() {
  int i = 0;
  int grade;
  double sum = 0;
  double average = 0;

  printf("Please input grades. Inputting -1000 will exit:\n");

  while (grade != -1000) {
    scanf("%d", &grade);
    if (grade == -1000){
       return 0;
    }
    sum += grade;
    i++;
    average = sum / i;
    printf("Sum is %f\n", sum);
    printf("Average is %f\n", average);
  }

  return 0;
}
