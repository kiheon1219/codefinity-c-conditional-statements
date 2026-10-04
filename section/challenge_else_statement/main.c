#include <stdbool.h>
#include <stdio.h>

bool is_adult(int age) {
    if (age >= 18) {
        return true;
    } else { 
    return false;
    }
}

int main() {
    printf("%d\n", is_adult(20));
    return 0;
}