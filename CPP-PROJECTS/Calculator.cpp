#include <iostream>
using namespace std;
class Calculator
{
    int n, h;
    string history[20];

public:
    Calculator()
    {
        n = 0;
        h = -1; // history header
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
        string str = "";            // saving to history purpose
        for (int i = 0; i < n; i++) // displaying the input given numbers as well as saving them for history
        {
            cout << array[i] << ',';
            // saving to history
            if (i < n - 1 && n != 1)
                str += to_string(array[i]) + " + ";
            else
                str += to_string(array[i]);
        }
        str += " = " + to_string(sum);
        saveHistory(str);
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
        string str = ""; // saving to history purpose
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << ',';
            // saving to history
            if (i < n - 1 && n != 1)
                str += to_string(array[i]) + " - ";
            else
                str += to_string(array[i]);
        }
        str += " = " + to_string(ans);
        saveHistory(str);
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
        quotient = double(dividend) / devisor;
        remainder = dividend % devisor;
        cout << "\nThe Quotient of " << dividend << '/' << devisor << " is : " << quotient << " & Remainder is : " << remainder << endl;
        string str = ""; // saving to history purpose
        str += to_string(dividend) + " / " + to_string(devisor) + " = " + to_string(quotient) + " & Remainder = " + to_string(remainder);
        saveHistory(str);
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
        string str = ""; // saving to history purpose
        for (int i = 0; i < n; i++)
        {
            if (i != n - 1)
                cout << array[i] << " X ";
            else
                cout << array[i];
            // saving to history
            if (i < n - 1 && n != 1)
                str += to_string(array[i]) + " x ";
            else
                str += to_string(array[i]);
        }
        str += " = " + to_string(ans);
        saveHistory(str);
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
        string str = ""; // saving to history purpose
        str += to_string(obtained) + " / " + to_string(total) + " = " + to_string((float(obtained) / total) * 100);
        saveHistory(str);
    }
    void showHistory()
    {
        cout << "\n\n";
        if (h == -1)
        {
            cout << "\t Nothing here!\n\n";
        }
        else
        {
            for (int i = 0; i <= h; i++)
            {
                cout << history[i] << endl;
            }
            cout << "\n";
        }
    }
    void saveHistory(string str)
    {
        // stores only 1st 20 calculations
        ++h;
        if (h < 20)
            history[h] = str;
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
main() //! MAIN FUNCTION STANDS HERE
{
    Calculator simple;
    simple.mainMenu();
    return 0;
}