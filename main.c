#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  printf("Enter your name: ");
  char name[100];
  scanf("%s", name);
  printf("Enter your age: ");
  int age;
  scanf("%d", &age);
  printf("Your name is: %s\n", name);
  printf("Your age is: %d\n", age);
  return 0;

}