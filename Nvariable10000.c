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
    int count = 0;
    int perfectNumbers[10000];
    for(int i = 9999; i >= 1; i--){
        if(isPerfectNumber(i) == 1){
            perfectNumbers[count] = i;
            count++;
        }
    }
    printf("Perfect numbers less than 10000 in descending order: \n");
    for(int i = 0; i < count; i++){
        printf("%d\n", perfectNumbers[i]);
    }
    return 0;
}
