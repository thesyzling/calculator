#include <stdio.h>
int addition(int a, int b);

int subtraction(int a, int b);

int multiply(int a, int b);

int division(int a, int b);

int main(void) {
    int a = 0, b = 0, result = 0;
    char x;
    printf("Give 'e' to exit calculation.\n");
    do {
        printf("Enter your first number:");
        scanf("%d", &a);
        printf("Enter your second number:");
        scanf("%d", &b);
        printf("Choose your operation.\n"
            "Enter '+' for addition.\n"
            "Enter '-' for subtraction.\n"
            "Enter '*' for multiply.\n"
            "Enter '/' for division.\n");
        scanf(" %c", &x);


        switch (x) {
        case '+':
            result = addition(a, b);
            break;
        case '-':
            result = subtraction(a, b);
            break;
        case '*':
            result = multiply(a, b);
            break;
        case '/':
            result = division(a, b);
            break;
        case 'e':
            break;
        default:
            printf("Enter a valid number.\n");
            break;
        }
    } while (x != 'e');
    printf("You succesfully exit.\n");

    return 0;
}

int addition(int a, int b) {
    int add = a + b;
    printf("Your addition is: %d\n", add);
    return add;
}
int subtraction(int a, int b) {
    int sub = a - b;
    printf("Your subtraction is: %d\n", sub);
    return sub;
}
int multiply(int a, int b) {
    int mul = a * b;
    printf("Your multiply is: %d\n", mul);
    return mul;
}
int division(int a, int b) {
    if (b != 0) {
        int div = a / b;
        int rem = a % b;
        printf("Your division is %d remain is %d\n", div, rem);
        return div;
    }
    else (b == 0); {
        printf("ERROR\n"
            "Integer cannot equal 0\n");
        return b;
    }
}