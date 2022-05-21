// calculator by bhags

#include <stdio.h>
int main()
{
    char operator;
    float num1;
    float num2;

    printf("Enter operator(+,_,/,*) ::\n");
    scanf("%c", &operator);

    printf("Enter the two no:\n");
    scanf("%f %f", &num1, &num2);

    switch (operator)
    {
    case '+':
        printf("Addition is %f+%f=is:%f ", num1, num2, num1 + num2);
        break;

        case '-':
        printf("Subtraction is %f-%f=is:%f ", num1, num2, num1-num2);
        break;

        case '*':
        printf("Multiplication is %f*%f=is:%f ", num1, num2, num1*num2);
        break;
        case '/':
        printf("Division is %f/%f=is:%f ", num1, num2, num1/num2);
        break;

    default:
        printf("Enter valid operator");
        break;
    }
    return 0;
}