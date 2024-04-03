#include <iostream>
#include <string>
#include <locale>

int main() {

    char op;
    double num1;
    double num2;
    double result;

    std::cout << "**********************Calculator**********************\n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Result: " << result << std::endl;
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Result: " << result << std::endl;
            break;
    }
    std::cout << "******************************************************";
    return 0;
}
