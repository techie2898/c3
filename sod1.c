#include <stdio.h>

int sumOfDigits(int num) { // with argument and return
    int sum = 0;
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);

    result = sumOfDigits(number); // function called with argument
    printf("Sum of digits = %d\n", result);

    return 0;
}
