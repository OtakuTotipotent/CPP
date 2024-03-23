#include <iostream>
#include <iomanip>
#include <string>
#include <string.h>
using namespace std;
void convert_nm();
void starTriangles();
int main()
{
    char ch;
    cout << "\n1. Decimal ~ Binary conversions \n2. Printing the Triangle \n0. Exit & close the program";
    cout << "\nEnter a number to go with : ";
    cin >> ch;
    if (ch == '0')
    {
        cout << "\n program exited !\n\n";
        exit(0);
    }
    else if (ch == '1')
    {
        convert_nm();
        system("pause");
        system("cls");
    }
    else if (ch == '2')
    {
        starTriangles();
        system("pause");
        system("cls");
    }
    else
    {
        system("cls");
        cout << "\n Error : invalid entry !\n";
        main();
    }
    return 0;
}
void convert_nm()
{
    char ch;
    unsigned int nm, b, d, x;
    cout << "\n1. Binary to Decimal conversion \n2. Decimal to Binary conversion \n0. Exit to main menu\n";
    cout << "Enter choice number :: ";
    cin >> ch;
    if (ch == '0')
    {
        cout << "\n exited !\n\n";
        system("cls");
        main();
    }
    else if (ch == '1')
    {
        cout << "\n----------> Enter binary number : ";
        cin >> nm;
        b = 1;
        d = 0;
        while (nm > 0)
        {
            d = d + (nm % 10) * b;
            b *= 2;
            nm /= 10;
        }
        cout << "----------> decimal number :: " << d << endl;
    }
    else if (ch == '2')
    {
        cout << "\n----------> Enter decimal number : ";
        cin >> nm;
        x = 1;
        d = 0;
        b = 0;
        while (x <= nm)
            x *= 2;
        x /= 2;
        while (x > 0)
        {
            d = nm / x;
            b = b * 10 + d;
            nm = nm - d * x;
            x = x / 2;
        }
        cout << "----------> binary number :: " << b << endl;
    }
    else
    {
        cout << "\nError : invalid input !\n";
        system("pause");
        convert_nm();
    }
    convert_nm();
}
void starTriangles()
{
    char ch = '*';
    int u, i, j;
    cout << "\nEnter height : ";
    cin >> u;
    cout << "insert a symbol to be printed as triangle : ";
    cin >> ch;
    for (i = 0; i < u; i++)
    {
        for (j = i + 1; j < u; j++)
            cout << ' ';
        for (j = 0; j < i * 2 + 1; j++)
            cout << ch;
        cout << endl;
    }
    cout << "\n1. Print another triangle \n0. Exit to main menu \n: enter choice : ";
    cin >> ch;
    if (ch == '0')
    {
        system("cls");
        main();
    }
    else if (ch == '1')
        starTriangles();
    else
    {
        cout << "\n Error : invalid entry\n";
        starTriangles();
    }
}
