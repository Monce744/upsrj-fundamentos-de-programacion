#include <stdio.h>

int main() {
    // Declare the variables
    float side, area, volume;

    // This section handles the data input, specifically for the side length of the square.
    printf("Enter the side length: ");
    scanf("%f", &side);

    // This is where the operations are performed to reach the result.
    area = side * side;  
    volume = side * side * side;

    // "The results are printed."
    // The '%.2f' format is being used to show only 2 decimal places of the result.
    printf("Square area: %.2f\n", area);
    printf("Cube volume: %.2f\n", volume);

    return 0;
}
