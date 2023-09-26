//Write a program to find the multiplication values and the cubic values using
//inline function

#include <iostream>
using namespace std;
// Inline function to calculate the multiplication of a number by 2
inline double multiplyBy2(double num) {
    return num * 2;
}

// Inline function to calculate the cube of a number
inline double cube(double num) {
    return num * num * num;
}

int main() {
    double number;

    
    std::cout << "Enter a number: ";
    std::cin >> number;

    
    double multiplicationResult = multiplyBy2(number);
    cout << "Multiplication by 2: " << multiplicationResult << endl;

    
    double cubicResult = cube(number);
    cout << "Cube: " << cubicResult << endl;

    return 0;
}

