#include <stdio.h>

float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);
float celsiusToKelvin(float c);
float kelvinToCelsius(float k);
float fahrenheitToKelvin(float f);
float kelvinToFahrenheit(float k);

int main()
{
    int choice;
    float inputTemp, result;

    printf("TEMPERATURE CONVERTER\n");

    printf("Select conversion type:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Kelvin\n");
    printf("6. Kelvin to Fahrenheit\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    printf("Enter the temperature to convert: ");
    scanf("%f", &inputTemp);

    switch (choice)
    {
    case 1:
        result = celsiusToFahrenheit(inputTemp);
        printf("%.2f Celsius = %.2f Fahrenheit\n", inputTemp, result);
        break;
    case 2:
        result = fahrenheitToCelsius(inputTemp);
        printf("%.2f Fahrenheit = %.2f Celsius\n", inputTemp, result);
        break;
    case 3:
        result = celsiusToKelvin(inputTemp);
        printf("%.2f Celsius = %.2f Kelvin\n", inputTemp, result);
        break;
    case 4:
        result = kelvinToCelsius(inputTemp);
        printf("%.2f Kelvin = %.2f Celsius\n", inputTemp, result);
        break;
    case 5:
        result = fahrenheitToKelvin(inputTemp);
        printf("%.2f Fahrenheit = %.2f Kelvin\n", inputTemp, result);
        break;
    case 6:
        result = kelvinToFahrenheit(inputTemp);
        printf("%.2f Kelvin = %.2f Fahrenheit\n", inputTemp, result);
        break;
    default:
        printf("Invalid choice.\n");
    }

    return 0;
}

// Function definitions
float celsiusToFahrenheit(float c)
{
    return (c * 9.0 / 5.0) + 32.0;
}

float fahrenheitToCelsius(float f)
{
    return (f - 32.0) * 5.0 / 9.0;
}

float celsiusToKelvin(float c)
{
    return c + 273.15;
}

float kelvinToCelsius(float k)
{
    return k - 273.15;
}

float fahrenheitToKelvin(float f)
{
    return celsiusToKelvin(fahrenheitToCelsius(f));
}

float kelvinToFahrenheit(float k)
{
    return celsiusToFahrenheit(kelvinToCelsius(k));
}
