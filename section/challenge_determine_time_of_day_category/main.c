#include <stdio.h>

char getTimeCategory(int hour) {
    switch (hour) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 21:
        case 22:
        case 23:
            return 'n';
            break;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            return 'm';
            break;
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
            return 'a';
            break;
        case 17:
        case 18:
        case 19:
        case 20:
            return 'e';
            break;
        default:
            return 'x';
            break;
    }
    return ' ';
}

int main() {
    printf("%c\n", getTimeCategory(22));
    return 0;
}