#include<stdio.h>

int a = 5;
int b = 10;

int main(){
  printf("a == b : %d", a == b);
  printf("\na != b : %d", a != b);

  printf("\na > b : %d", a > b);
  printf("\na < b : %d", a < b);

  printf("\na >= b : %d", a >= b);
  printf("\n5 >= 5 : %d", 5 >= 5);
  printf("\na <= b : %d", a <= b);
  printf("\n5 <= 5 : %d", 5 <= 5);

  return 0;
}
