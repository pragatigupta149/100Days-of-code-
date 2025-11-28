#include <stdio.h>

enum Numbers {
    ONE = 10,
    TWO,
    THREE,
    FOUR,
    FIVE
};

int main() {
    enum Numbers n;

    printf("Enum values starting from 10:\n");

    for (n = ONE; n <= FIVE; n++) {
        switch (n) {
            case ONE:
                printf("ONE = %d\n", n);
                break;
            case TWO:
                printf("TWO = %d\n", n);
                break;
            case THREE:
                printf("THREE = %d\n", n);
                break;
            case FOUR:
                printf("FOUR = %d\n", n);
                break;
            case FIVE:
                printf("FIVE = %d\n", n);
                break;
        }
    }

    return 0;
}
