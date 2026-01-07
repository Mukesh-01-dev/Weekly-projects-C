#include<stdio.h>

int main(){
  int a, b;
  printf("Enter number 1: ");
  scanf("%d", &a);
  printf("Enter number 2: ");
  scanf("%d", &b);

  printf("Enter the operation: \n");
  printf("1. Addition \n");
  printf("2. Subtraction \n");
  printf("3. Multiplication \n");
  printf("4. Division \n");
  
  int operation;
  printf("Enter number from 1 - 4: ");
  scanf("%d", &operation);

  switch (operation)
  {
  case 1:
    printf("Result = %d\n", a + b);
    break;
  case 2:
    printf("Result = %d\n", a - b);
    break;
  case 3:
    printf("Result = %d\n", a * b);
    break;
  case 4:
    printf("Result = %.2f\n",(float) a / b);
    break;
  default: 
    printf("Enter valid operation");
  }



  return 0;
}