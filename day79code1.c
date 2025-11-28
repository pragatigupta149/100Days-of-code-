#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50] = "numbers.txt";  // file name
    int num, sum = 0, count = 0;
    float avg;

    // Open file in read mode
    fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error: Could not open %s\n", filename);
        return 1;
    }

    // Read integers until EOF
    while (fscanf(fp, "%d", &num) != EOF) {
        sum += num;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in the file!\n");
    } else {
        avg = (float)sum / count;
        printf("Sum   = %d\n", sum);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
