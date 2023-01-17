#include <stdio.h>

int main() {
    float a, b;
    char ch;
    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter an operator (+, -, *): ");
    scanf(" %c", &ch);

    if (ch == '+') {
        printf("%.2f + %.2f = %.2f", a, b, a + b);
    } else if (ch == '-') {
        printf("%.2f - %.2f = %.2f", a, b, a - b);
    } else if (ch == '*') {
        printf("%.2f * %.2f = %.2f", a, b, a * b);
    } else {
        printf("Error: Invalid operator");
    }
    return 0;
}
