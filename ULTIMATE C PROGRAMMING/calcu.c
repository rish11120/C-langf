/*#include <stdio.h>
#include <float.h>

double simpleCalc(double num1, double num2, char op) {
    double res;
    switch (op) {
        case '+':
            res = num1 + num2;
            break;
        case '-':
            res = num1 - num2;
            break;
        case '*':
            res = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                res = num1 / num2;
            else {
                printf("Error! Division by zero.\n");
                return -DBL_MAX;
            }
            break;
        default:
            printf("Error! Operator is not correct.\n");
            return -DBL_MAX;
    }
    return res;
}

int main() {
    char op;
    double num1, num2, res;

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two operands: ");
    scanf("%lf %lf", &num1, &num2);

    res = simpleCalc(num1, num2, op);

    if (res != -DBL_MAX)
        printf("Result: %.2lf\n", res);

    return 0;
}*/


\\ advance calculator

#include <stdio.h>
#include <math.h>

void arithmetic();
void trigonometric();
void exponential();
void logarithmic();

int main() {
    int choice;
    do {
        printf("\nAdvanced Calculator\n");
        printf("1. Arithmetic Operations\n");
        printf("2. Trigonometric Functions\n");
        printf("3. Exponential Functions\n");
        printf("4. Logarithmic Functions\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                arithmetic();
                break;
            case 2:
                trigonometric();
                break;
            case 3:
                exponential();
                break;
            case 4:
                logarithmic();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}

void arithmetic() {
    int op;
    double a, b;
    printf("Select operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch (op) {
        case 1:
            printf("Result: %.2lf\n", a + b);
            break;
        case 2:
            printf("Result: %.2lf\n", a - b);
            break;
        case 3:
            printf("Result: %.2lf\n", a * b);
            break;
        case 4:
            if (b != 0)
                printf("Result: %.2lf\n", a / b);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operation!\n");
    }
}

void trigonometric() {
    int op;
    double val;
    printf("Select function:\n");
    printf("1. Sine\n");
    printf("2. Cosine\n");
    printf("3. Tangent\n");
    printf("Enter your choice: ");
    scanf("%d", &op);
    printf("Enter value (in radians): ");
    scanf("%lf", &val);

    switch (op) {
        case 1:
            printf("Result: %.2lf\n", sin(val));
            break;
        case 2:
            printf("Result: %.2lf\n", cos(val));
            break;
        case 3:
            printf("Result: %.2lf\n", tan(val));
            break;
        default:
            printf("Invalid function!\n");
    }
}

void exponential() {
    double base, exp;
    printf("Enter base and exponent: ");
    scanf("%lf %lf", &base, &exp);
    printf("Result: %.2lf\n", pow(base, exp));
}

void logarithmic() {
    double val;
    printf("Enter value: ");
    scanf("%lf", &val);
    if (val > 0)
        printf("Result: %.2lf\n", log(val));
    else
        printf("Error! Logarithm of non-positive number.\n");
}

