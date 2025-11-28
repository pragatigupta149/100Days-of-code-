//Show that enums store integers by printing assigned values.
    
    
#include <stdio.h>

enum Colors {
    RED = 1,
    BLUE,
    GREEN,
    YELLOW,
    BLACK
};

int main() {
    enum Colors c;

    printf("Enum names and their integer values:\n\n");

    for (c = RED; c <= BLACK; c++) {
        switch (c) {
            case RED:
                printf("RED = %d\n", c);
                break;
            case BLUE:
                printf("BLUE = %d\n", c);
                break;
            case GREEN:
                printf("GREEN = %d\n", c);
                break;
            case YELLOW:
                printf("YELLOW = %d\n", c);
                break;
            case BLACK:
                printf("BLACK = %d\n", c);
                break;
        }
    }

    return 0;
}
