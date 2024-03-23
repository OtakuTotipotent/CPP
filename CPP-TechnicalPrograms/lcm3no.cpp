#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3; // declare three variables to store the user input
    int max, lcm; // declare two variables to store the maximum and the lcm
    cout << "Enter three numbers: "; // prompt the user to enter three numbers
    cin >> num1 >> num2 >> num3; // read the user input and store it in the variables
    max = (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3); // find the maximum of the three numbers using ternary operator
    lcm = max; // initialize the lcm to the maximum
    while (true) // start an infinite loop
    {
        if (lcm % num1 == 0 && lcm % num2 == 0 && lcm % num3 == 0) // check if the lcm is divisible by all the three numbers
        {
            cout << "The LCM of " << num1 << ", " << num2 << ", and " << num3 << " is " << lcm << endl; // print the lcm
            break; // exit the loop
        }
        lcm++; // increment the lcm by 1
    }
    return 0;
}
