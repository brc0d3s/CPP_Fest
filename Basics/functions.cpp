#include <iostream>
#include <cmath>  // Include cmath for the pow function
using namespace std;

// Function prototypes
float add(float num_1, float num_2);
float divide(float num_1, float num_2);
float subtract(float num_1, float num_2);
float my_modulus(float num_1, float num_2);
float exponent(float num_1, float num_2);

// Global variables
float num_1;
float num_2;
float result;

int main() {
    // Input values
    cout << "Enter first number: ";
    cin >> num_1;

    cout << "Enter second number: ";
    cin >> num_2;

    // Menu for operations
    int choice;
    cout << "Choose an operation:\n";
    cout << "1. Add\n2. Divide\n3. Subtract\n4. Modulus\n5. Exponent\n";
    cout << "Enter choice (1-5): ";
    cin >> choice;

    // Perform the selected operation
    switch (choice) {
        case 1:
            result = add(num_1, num_2);
            break;
        case 2:
            result = divide(num_1, num_2);
            break;
        case 3:
            result = subtract(num_1, num_2);
            break;
        case 4:
            result = my_modulus(num_1, num_2);
            break;
        case 5:
            result = exponent(num_1, num_2);
            break;
        default:
            cout << "Invalid choice\n";
            return 1;  // Return an error code
    }

    // Display the result
    cout << "Result: " << result << endl;

    return 0;
}

// Function for addition
float add(float num_1, float num_2) {
    return num_1 + num_2;
}

// Function for division
float divide(float num_1, float num_2) {
    if (num_2 != 0) {
        return num_1 / num_2;
    } else {
        cout << "Error: Division by zero\n";
        return 0;  // Return an error code
    }
}

// Function for subtraction
float subtract(float num_1, float num_2) {
    return num_1 - num_2;
}

// Function for modulus
float my_modulus(float num_1, float num_2) {
    if (num_2 != 0) {
        return fmod(num_1, num_2);
    } else {
        cout << "Error: Modulus by zero\n";
        return 0;  // Return an error code
    }
}

// Function for exponentiation
float exponent(float num_1, float num_2) {
    return pow(num_1, num_2);
}
