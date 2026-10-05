#include <stdio.h>

int getSnackPrice(int snackType, int size) {
    switch(snackType) {
        case 1: 
            if (size == 1) {
                return 10;
            }else if (size == 2) {
                return 15;
            }else {
                return 12;
            }
        case 2: 
            if (size == 1) {
                return 20;
            }else if (size == 2) {
                return 25;
            }else {
                return 22;
            }
        default:
            return 0;
            }
    }
    // Implement the logic to determine the price of the snack

int main() {
    printf("Price: %d\n", getSnackPrice(1, 1));
    return 0;
}