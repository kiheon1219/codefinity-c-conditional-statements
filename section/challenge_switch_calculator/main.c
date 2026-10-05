#include <stdio.h>

int switchCalculator(int a, int b, char op) {
    int result = 0;
    switch (op) {
        case '+': 
            result = a + b;
            break;
        case '-': 
            result = a -b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b != 0) result = a / b;
            else result = 0;
            break;
        default:
            result = 0;
            break;
    }
    printf("%d\n", result);
    return result;
}

int main() {
    // Example usage
    switchCalculator(8, 2, '+');
    switchCalculator(8, 2, '-');
    switchCalculator(8, 2, '*');
    switchCalculator(8, 2, '/');
    switchCalculator(8, 0, '/');
    return 0;
}
