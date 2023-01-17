#include <stdio.h>

int sumOfDivisors(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }
    return sum;
}

int isPerfectNumber(int n) {
    int sum = sumOfDivisors(n);
    if (sum == n) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    int n = 6;
    int sum = sumOfDivisors(n);
    printf("Sum of divisors of %d is %d\n", n, sum);
    int perfect = isPerfectNumber(n);
    if (perfect == 1) {
        printf("%d is a perfect number\n", n);
    }
    else {
        printf("%d is not a perfect number\n", n);
    }
    return 0;
}
