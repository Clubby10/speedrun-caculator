# include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    char op;
    float num1, num2;

    system("color 4");
    cout << "Made by Clubby10 (gitHub.com/clubby10)\n";
    cout << "in 1 min and 36 secounds\n";
    Sleep(4000);
    system("cls");


    system("color 3");
    cout << "Enter operator either + or - or * or /: ";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    system("cls");

    switch (op)
    {
    case '+':
        system("color 2"); 
        cout << num1 << " + " << num2 << "=\n";
        cout << num1 + num2;
        break;

    case '-':
        system("color 2");
        cout << num1 << " - " << num2 << "=\n";
        cout << num1 - num2;
        break;

    case '*':
        system("color 2");
        cout << num1 << " * " << num2 << "=\n";
        cout << num1 * num2;
        break;

    case '/':
        system("color 2");
        cout << num1 << " / " << num2 << "=\n";
        cout << num1 / num2;
        break;

    default:
        system("color 4");
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not supported";
        break;
    }

    return 0;
}

//1 min 36 seconds
