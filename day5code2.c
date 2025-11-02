Write a program to input time in seconds and convert it to hours:minutes:seconds format.
    #include <stdio.h>   // Header file for input and output functions

int main() {
    int total_seconds;     // Variable to store input seconds
    int hours, minutes, seconds;   // Variables for conversion

    // Taking input from the user
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Calculating hours, minutes, and seconds
    hours = total_seconds / 3600;          // 1 hour = 3600 seconds
    total_seconds = total_seconds % 3600;  // Remaining seconds after hours

    minutes = total_seconds / 60;          // 1 minute = 60 seconds
    seconds = total_seconds % 60;          // Remaining seconds

    // Displaying the result
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;   // Program executed successfully
}
