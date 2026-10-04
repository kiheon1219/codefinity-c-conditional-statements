#include <stdio.h>

// Complete the function below
double calculateBonus(int steps) {
    double bonus = 0;
    if (steps >= 10000) {bonus = steps*0.05;}
    return bonus;
}

int main() {
    int steps = 12000;
    printf("Bonus: %.2f\n", calculateBonus(steps));
    return 0;
}
