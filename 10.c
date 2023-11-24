#include <stdio.h>
#include <math.h>

int main(void) {
    double number1 = 0, number2 = 0;
    char operation;

    printf("Enter your first number:");
    scanf("%lf", &number1);

    printf("Enter your second number:");
    scanf("%lf", &number2);

    printf("Choose your operation.\n");
    printf("Choose '+' for addition.\n");
    printf("Choose '-' for subtraction.\n");
    printf("Choose '*' for multiply.\n");
    printf("Choose '/' for division.\n");

    scanf(" %c", &operation);

    switch (operation) {
    case '+':
        printf("%lf add %lf is %lf.\n", number1, number2, number1 + number2);
        break;
        case '-':
        printf("%lf subtract %lf is %lf.\n", number1, number2, number1 - number2);
        break;
        case '/':
        if (number2 != 0) {
        printf("%lf div %lf is %lf remain is %lf.\n", number1, number2, number1 / number2, fmod(number1, number2));
        } else {
        printf("Number2 must be different from 0.\n");
        }
        break;
        case '*':
        printf("%lf multiply %lf is %lf.\n", number1, number2, number1 * number2);
        break;
        default:
        printf("Enter a valid operation.\n");
        break;
    }

    return 0;
}