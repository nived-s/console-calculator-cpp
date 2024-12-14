// console based caluclator app

#include <iostream>
#include <set>
#include <string>
#include <sstream>
using namespace std;

void addition(const float& num1, const float& num2)
{
    cout << "\tResult: " << num1 + num2 << endl;
}

void subtraction(const float& num1, const float& num2)
{
    cout << "\tResult: " << num1 - num2 << endl;
}

void multiplication(const float& num1, const float& num2)
{
    cout << "\tResult: " << num1 * num2 << endl;
}

void division(const float& num1, const float& num2)
{
    if (num2 == 0.0f)
    {
        cout << "Division by zero not possible.\n";
        return;
    }
    else
    {
        cout << "\tResult: " << num1 / num2 << endl;
    }
}

int main()
{
    cout << "---Welcome to World's Most Advanced Calculator---\n\n";

    bool flag = true;
    string menu = "\nchoose option: \n\t1) Addition\n\t2) Subtraction\n\t3) Multiplication\n\t4) Division\n\t5) Exit\n\nSelect your operation: ";

    float num1;
    float num2;
    float result;

    string input;
    int user_choosen;
    set<int> avail_user_options = { 1, 2, 3, 4, 5 };

    do
    {
        cout << menu;
        cin >> input;

        // convert string to input to do validation
        stringstream ss(input);

        if (!(ss >> user_choosen)) {
            cout << "Invalid option\n";
            continue;
        }
        else if (user_choosen == 5)
        {
            cout << "\nExiting program." << endl;
            flag = false;
        }
        else {
            cout << "\nEnter values separated by space: ";
            cin >> num1 >> num2;
            if (user_choosen == 1)
            {
                addition(num1, num2);
            }

            else if (user_choosen == 2)
            {
                subtraction(num1, num2);
            }

            else if (user_choosen == 3)
            {
                multiplication(num1, num2);
            }

            else if (user_choosen == 4)
            {
                division(num1, num2);
            }
        }
    } while (flag);
}

