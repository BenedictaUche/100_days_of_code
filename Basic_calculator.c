#include <stdio.h>
#include <math.h>

int main(){

    float num1;
    float num2;
    char operator;
    float answer;

    printf("Enter a arithmetic:\n");
    scanf("%f %c %f", &num1, &operator, &num2);

    switch (operator)
    {
    case '+':
        answer = num1 + num2;
        break;
    case '-':
        answer = num1 - num2;
        break;
    case '*':
        answer = num1 * num2;
        break;
    case '/':
        answer = num1 / num2;
        break;
    case '^':
        answer = pow(num1,num2);
        break;
    case ' ':
        answer = sqrt(num2);
        break;
    
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",num1,operator, num2, answer);
  goto exit;
  fail:
    printf("Invalid operator.\n");
  exit:
    return 0;

}