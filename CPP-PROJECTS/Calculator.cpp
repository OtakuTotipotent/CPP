#include <iostream>
using namespace std;

class Calculator
{
    int n;

public:
    Calculator()
    {
        n = 0;
    }
    void mainMenu()
    {
        char choice;
        system("cls");
        cout << "\n* C A L C U L A T O R\n\n";
        cout << "\n  1. ADD        (+)";
        cout << "\n  2. Divide     (/)";
        cout << "\n  3. Subtract   (-)";
        cout << "\n  4. Multiply   (x)";
        cout << "\n  5. Percentage (%)";
        cout << "\n  6. Check  History";
        cout << "\n\n  0. Close  Program";
        cout << "\n  ~  Enter choice:";
        cin >> choice;
        selectOperation(choice);
    }
    void userInput()
    {
        cout << "\n\nHow many numbers : ";
        cin >> n;
        if (n < 1)
        {
            cout << "\n  error : invalid input\n";
            userInput();
        }
    }
    void Add()
    {
        userInput();
        int sum = 0;
        int array[n];
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << "enter number (" << i + 1 << ") : ";
            cin >> array[i];
            sum += array[i];
        }
        cout << "\n\nsum of ";
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << ',';
        }
        cout << " is :: " << sum << endl;
    }
    void Sub()
    {
        userInput();
        int array[n];
        int ans;
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << "enter number (" << i + 1 << ") : ";
            cin >> array[i];
        }
        if (n > 1)
        {
            ans = array[0];
            for (int i = 1; i < n; i++)
            {
                ans = ans - array[i];
            }
        }
        else
        {
            ans = 0 - array[n - 1];
        }
        cout << "\n\nSubtraction of ";
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << ',';
        }
        cout << " is :: " << ans << endl;
    }
    void Divide()
    {
        double quotient;
        int devisor, dividend, remainder;
        cout << "\nEnter Dividend : ";
        cin >> dividend;
        cout << "Enter devisor : ";
        cin >> devisor;
        cout << "\nThe Quotient of " << dividend << '/' << devisor << " is : " << double(dividend) / devisor << " & Remainder is : " << dividend % devisor << endl;
    }
    void Multiply()
    {
        userInput();
        int array[n];
        int ans = 1;
        cout << "\n";
        for (int i = 0; i < n; i++)
        {
            cout << "enter number (" << i + 1 << ") : ";
            cin >> array[i];
            ans *= array[i];
        }
        cout << "\n\nMultiplication answer of ";
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
                cout << array[i] << " X ";
            else
                cout << array[i];
        }
        cout << " is :: " << ans << endl;
    }
    void Percentage()
    {
        int total, obtained;
        cout << "\nEnter number : ";
        cin >> obtained;
        cout << "Enter total : ";
        cin >> total;
        cout << endl
             << obtained << '/' << total << " : " << (float(obtained) / total) * 100 << '%' << endl;
    }

    void showHistory()
    {
    }

    void selectOperation(char choice)
    {
        if (choice == '0')
        {
            exit(0);
        }
        else if (choice == '1')
        {
            Add();
        }
        else if (choice == '2')
        {
            Divide();
        }
        else if (choice == '3')
        {
            Sub();
        }
        else if (choice == '4')
        {
            Multiply();
        }
        else if (choice == '5')
        {
            Percentage();
        }
        else if (choice == '6')
        {
            showHistory();
        }
        else
        {
            cout << "\n  error # invalid input\n";
        }
        system("pause");
        mainMenu();
    }
};

main()
{
    Calculator simple;
    simple.mainMenu();
    return 0;
}