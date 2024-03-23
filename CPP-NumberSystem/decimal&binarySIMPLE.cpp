#include <iostream>
using namespace std;
void binary_to_decimal()
{
    int n;
    cout << "-- Enter binary number : ";
    cin >> n;
    int power = 1, decimal = 0;
    while (n > 0)
    {
        decimal += ((n % 10) * power); // gives last digit
        power *= 2;
        n /= 10;
    }
    cout << "-- Decimal value ((())) " << decimal;
}
void decimal_to_binary()
{
    int n;
    cout << "-- Enter decimal number : ";
    cin >> n;
    int power = 1, binary = 0;
    while (n > 0)
    {
        binary += ((n % 2) * power); // gives a binary digit
        power *= 10;
        n /= 2;
    }
    cout << "-- Binary value ((())) " << binary;
}
int main()
{
    char choice;
    cout << "1. Decimal to Binary Conversion \n2. Binary to Decimal Conversion \n0. Exit the Program \n-- Enter choice here : ";
    cin >> choice;
    if (choice == '0')
    {
        cout << "Program exited successfully.\n";
        exit(0);
    }
    else if (choice == '1')
    {
        decimal_to_binary();
        cout << endl;
        main();
    }
    else if (choice == '2')
    {
        binary_to_decimal();
        cout << endl;
        main();
    }
    else
    {
        cout << "-- Error: invalid input --\n";
        system("pause");
        system("cls");
        main();
    }

    return 0;
}