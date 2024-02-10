#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

float subtract(float a, float b) {
    return a - b;
}

float multiply(float a, float b) {
    return a * b;
}

float divide(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error! Division by zero.\n");
        return 0;
    }
}

int main() {
    char operator;
    float num1, num2, result;

    printf("----------MENU----------\n");
    printf("1. Addition \n");
    printf("2. Subtraction \n");
    printf("3. Multiplication \n");
    printf("4. Division \n");
    printf("Enter your choice: ");
    scanf(" %c", &operator);

    if (operator < '1' || operator > '4') {
        printf("Invalid choice! Please select a valid option from the menu.\n");
        return 1; 
    }

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch (operator) {
        case '1':
            result = add(num1, num2);
            break;
        case '2':
            result = subtract(num1, num2);
            break;
        case '3':
            result = multiply(num1, num2);
            break;
        case '4':
            result = divide(num1, num2);
            break;
    }

    printf("Result: %f\n", result);

    return 0;
}
