#include <stdio.h>

int main() {
    char op;
    double a, b;
    char again;

    do {
        printf("Enter expression: ");
        scanf("%lf %c %lf", &a, &op, &b);

        switch (op) {
            case '+':
                printf("Result: %.2f\n", a + b);
                break;
            case '-':
                printf("Result: %.2f\n", a - b);
                break;
            case '*':
                printf("Result: %.2f\n", a * b);
                break;
            case '/':
                if (b != 0)
                    printf("Result: %.2f\n", a / b);
                else
                    printf("Error: Division by zero!\n");
                break;
            default:
                printf("Invalid operator!\n");
        }

        printf("Calculate again? (y/n): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');

    return 0;
}
