#include <stdio.h>
int main(){
double num1, num2, result;
char operation;
printf("enter the first number:");
scanf("%lf",&num1);
printf("enter the operation (+ - * /) :");
scanf("%c",&operation);
printf("enter the second number");
scanf("%lf",&num2);
if (operation == '+'){
  result = num1 + num2;
}else if (operation =='-'){
  result = num1 - num2;
}else if (operation == '*'){
  result = num1 * num2;
}else if (operation =='/'){
  if (num2 !=0)
  result = num1 / num2;
  else {
    printf("error: division by zero is not allowed");
    return 1;
  }
}else {
  printf("error:invalid operation");
  return 1;
}
printf("the result is: %2f\n",result);
return 0;
}
