#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int add(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
int divide(int num1, int num2);

typedef struct {
  int id;
  char title[40];
  float hours;
} course;

union val {
  int int_num;
  float fl_num;
  char str[20];
};

union val test;

int main(int argc, char **argv) {

  course cs1 = {
      .id = 341279,
      .title = "Intro to C++",
      .hours = 12.5,
  };
  course cs2;

  /* initialize cs2 */
  cs2.id = 341281;
  strcpy(cs2.title, "Advanced C++");
  cs2.hours = 14.25;

  /* display course info */
  printf("%d\t%s\t%4.2f\n", cs1.id, cs1.title, cs1.hours);
  printf("%d\t%s\t%4.2f\n", cs2.id, cs2.title, cs2.hours);

  /* declare two variables */
  int x = 2, y = 3, result;
  short unsigned int choice;
  int (*op[])(int, int) = {add, subtract, multiply, divide};

  printf("0 to add, 1 to subtract, 2 to multiply, or 3 to divide: %d", choice);
  result = op[choice](x, y);
  printf("%d", result);
  return 0;
}

int add(int x, int y) { return (x + y); }

int subtract(int x, int y) { return (x - y); }

int multiply(int x, int y) { return (x * y); }

int divide(int x, int y) {
  if (y != 0)
    return (x / y);
  else
    return 0;
}