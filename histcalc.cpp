#include <iostream>
#include <vector>
#include <string>
#include <windows.h>

using namespace std;

int main()
{

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    double answer, number_1, number_2;
    vector<string> history;
    char operation;
    char showHistory;

    while (true)
    {
        cout << "Введите первое число: ";
        cin >> number_1;

        cout << "Введите операцию: ";
        cin >> operation;

        cout << "Введите второе число: ";
        cin >> number_2;

        bool valid = true;

        switch (operation)
        {
        case '+':
            answer = number_1 + number_2;
            break;
        case '-':
            answer = number_1 - number_2;
            break;
        case '*':
            answer = number_1 * number_2;
            break;
        case '/':
            if (number_2 != 0)
            {
                answer = number_1 / number_2;
                break;
            }
            else
            {
                cout << "Ошибка - деление на ноль";
                valid = false;
                break;
            }
        default:
            cout << "неверная операция!" << endl;
            valid = false;
            break;
        }

        string entry = to_string(number_1) + " " + operation + " " + to_string(number_2) + " = " + to_string(answer);
        history.push_back(entry);
        cout << "Результат: " << answer << endl;

        cout << "Показать историю? y/n: ";
        cin >> showHistory;

        if (showHistory == 'y' || showHistory == 'Y')
        {
            cout << "====ИСТОРИЯ====" << endl;
            for (int i = 0; i < history.size(); i++)
            {
                cout << i + 1 << ". " << history[i] << endl;
            }
        }
        else if (showHistory == 'n' || showHistory == 'N')
        {
            cout << "Выход...";
            break;
        }
    }

    return 0;
}
