#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    double numberA = 0;
    cout << "������� ������ �����: ";
    cin >> numberA;

    char operation = '\0';
    cout << "������� ��������: ";
    cin >> operation;

    double numberB = 0;
    cout << "������� ������ �����: ";
    cin >> numberB;

    double result = 0;
    if (operation == '+')
        result = numberA + numberB;
    else if (operation == '-')
        result = numberA - numberB;
    else if (operation == '*')
        result = numberA * numberB;
    else if (operation == '/')
        result = numberA / numberB;

    cout << result;

    return 0;
}
