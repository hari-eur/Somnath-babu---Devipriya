#include <stdio.h>
int main() {
  int a,b;
  char c;
  printf("Enter an arithmetic operator: ");
  scanf("%c", &c);
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  switch (c) {
    case '+':
      printf("%d + %d = %d", a, b, a + b);
      break;
    case '-':
      printf("%d - %d = %d", a, b, a - b);
      break;
    case '*':
      printf("%d * %d = %d", a, b, a * b);
      break;
    case '/':
      printf("%d / %d = %d", a, b, a / b);
      break;
    default:
      printf("Incorrect operator.");
  }
    return 0;
}