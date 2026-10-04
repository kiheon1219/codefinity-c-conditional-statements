#include <stdio.h>

char getDayType(int day) {
    switch (day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
                return 'W';
                break;
            case 6:
            case 7:
                return 'H';
                break;
            default:
                return '?';
                break;
    }
    return ' ';
}

int main() {
    
    printf("%c\n", getDayType(1));
    printf("%c\n", getDayType(6));
    printf("%c\n", getDayType(8));
    return 0;
}