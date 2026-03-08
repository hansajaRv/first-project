#include <iostream>

// Function declarations
double celsiusToFahrenheit(double c);
double fahrenheitToCelsius(double f);
double meterToKilometer(double m);
double kilometerToMeter(double km);
double cmToMeter(double cm);
double meterToCm(double m);
double kgToGram(double kg);
double gramToKg(double g);

int main() {

    int choice;
    double value, result;

    do {

        std::cout << "\n=== Unit Converter ===\n";
        std::cout << "1. Celsius to Fahrenheit\n";
        std::cout << "2. Fahrenheit to Celsius\n";
        std::cout << "3. Meters to Kilometers\n";
        std::cout << "4. Kilometers to Meters\n";
        std::cout << "5. Centimeters to Meters\n";
        std::cout << "6. Meters to Centimeters\n";
        std::cout << "7. Kilograms to Grams\n";
        std::cout << "8. Grams to Kilograms\n";
        std::cout << "9. Exit\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;

        switch (choice) {

            case 1:
                std::cout << "Enter temperature in Celsius: ";
                std::cin >> value;
                result = celsiusToFahrenheit(value);
                std::cout << "Temperature in Fahrenheit: " << result << "\n";
                break;

            case 2:
                std::cout << "Enter temperature in Fahrenheit: ";
                std::cin >> value;
                result = fahrenheitToCelsius(value);
                std::cout << "Temperature in Celsius: " << result << "\n";
                break;

            case 3:
                std::cout << "Enter length in meters: ";
                std::cin >> value;
                result = meterToKilometer(value);
                std::cout << "Length in kilometers: " << result << "\n";
                break;

            case 4:
                std::cout << "Enter length in kilometers: ";
                std::cin >> value;
                result = kilometerToMeter(value);
                std::cout << "Length in meters: " << result << "\n";
                break;

            case 5:
                std::cout << "Enter length in centimeters: ";
                std::cin >> value;
                result = cmToMeter(value);
                std::cout << "Length in meters: " << result << "\n";
                break;

            case 6:
                std::cout << "Enter length in meters: ";
                std::cin >> value;
                result = meterToCm(value);
                std::cout << "Length in centimeters: " << result << "\n";
                break;

            case 7:
                std::cout << "Enter mass in kilograms: ";
                std::cin >> value;
                result = kgToGram(value);
                std::cout << "Mass in grams: " << result << "\n";
                break;

            case 8:
                std::cout << "Enter mass in grams: ";
                std::cin >> value;
                result = gramToKg(value);
                std::cout << "Mass in kilograms: " << result << "\n";
                break;

            case 9:
                std::cout << "Exiting program...\n";
                break;

            default:
                std::cout << "Invalid choice. Please try again.\n";

        }

    } while (choice != 9);

    return 0;
}


// Function definitions

double celsiusToFahrenheit(double c) {
    return (c * 9.0 / 5.0) + 32;
}

double fahrenheitToCelsius(double f) {
    return (f - 32) * 5.0 / 9.0;
}

double meterToKilometer(double m) {
    return m / 1000.0;
}

double kilometerToMeter(double km) {
    return km * 1000.0;
}

double cmToMeter(double cm) {
    return cm / 100.0;
}

double meterToCm(double m) {
    return m * 100.0;
}

double kgToGram(double kg) {
    return kg * 1000.0;
}

double gramToKg(double g) {
    return g / 1000.0;
}