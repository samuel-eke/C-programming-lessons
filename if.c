#include <stdio.h>
int main() {
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  printf("This is the out of the first number %d\n", sum1);
  printf("This is the output of the second number %d\n", sum2);
  printf("The output of the third number %d\n", sum3);
  return 0;

}
