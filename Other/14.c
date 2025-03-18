#include <stdio.h>

int main() {
    int hour, min;

    // Prompt user for input
    printf("Enter the hour (0-12): ");
    scanf("%d", &hour);
    printf("Enter the minutes (0-59): ");
    scanf("%d", &min);

    // Validate input
    if (hour < 0 || hour > 12 || min < 0 || min > 59) {
        printf("Invalid input. Please enter hour between 0-12 and minutes between 0-59.\n");
        return 1;
    }

    // Calculate angles
    float hour_angle = (hour % 12) * 30 + (min / 60.0) * 30; // Each hour is 30 degrees
    float min_angle = min * 6; // Each minute is 6 degrees

    // Calculate the difference between the two angles
    float angle = hour_angle - min_angle;

    // Ensure the angle is positive
    if (angle < 0) {
        angle = -angle;
    }

    // The angle between the hands should be the smaller angle
    if (angle > 180) {
        angle = 360 - angle;
    }

    // Output the result
    printf("The angle between the hour and minute hand is: %.2f degrees\n", angle);

    return 0;
}