#include <iostream>
#include <string>
#include <windows.h>
#include <vector>

int main() {
    using namespace std;

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8); 

    double answer;

    double number_1;
    cout << "Введите первое число: ";
    cin >> number_1;

    char operation;
    cout << "Введите операцию *, /, +, -: ";
    cin >> operation;

    double number_2;
    cout << "Введите второе число: ";
    cin >> number_2;

    switch (operation) {
        case '*':
                answer = number_1 * number_2;
                    break;
        case '/':
                answer = number_1 / number_2;
                    break;
        case '-':
                answer = number_1 - number_2;
                    break;
        case '+':
                answer = number_1 + number_2;
                    break;
        default:
                cout << "Неверная операция" << endl;
                    break;
    }

    cout << "Результат: " << answer;

    return 0;
}