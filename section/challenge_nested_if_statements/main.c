#include <stdio.h>

int evaluateScore(int score) {
    if (score >50) {
        if (score > 80) {
            return 2;
        }else {
            return 1;
            }
    }else {
        return 0;
    }
}

int main() {
    printf("%d\n", evaluateScore(75));
    return 0;
}