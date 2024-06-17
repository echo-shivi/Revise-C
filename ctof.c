#include <stdio.h>

// Function prototype for the conversion function
float celsiusToFahrenheit(float celsius);

int main()
{
    float celsius, fahrenheit;

    // Prompt the user to enter the temperature in Celsius
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    // Convert Celsius to Fahrenheit using the conversion function
    fahrenheit = celsiusToFahrenheit(celsius);

    // Print the result
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}

// Function to convert Celsius to Fahrenheit
float celsiusToFahrenheit(float celsius)
{
    return (celsius * 9 / 5) + 32;
}
