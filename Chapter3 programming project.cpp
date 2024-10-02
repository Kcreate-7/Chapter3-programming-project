// Chapter3 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main()


{
    float interestRate, principle, interestAmnt, savingsAmount, interest; /* Variable declaration
    used int for the times compounded */

    int timesCompounded;

    cout << "Hello! What is your principle investment? " << endl;

    cin >> principle; // input from user to get values

        cout << "\n";

    cout << "Okay, now what is your interest rate? " << endl;

    cin >> interestRate; // input from user to get values

        cout << "\n";

    cout << "How many times has the interest compounded? " << endl;

    cout << "(if it is compouned quarterly, it would be 4 times)" << endl;

        cout << "\n";

    cin >> timesCompounded; // input from user to get values

        cout << "\n";

        cout << "\n";

    interest = interestRate / 100;

    interestAmnt = principle * (interestRate / 100);

    savingsAmount = principle * pow(1 + (interest / timesCompounded), timesCompounded);

    cout << setprecision(2) << fixed << showpoint; /* call can be applied to all of cout outputs to ensure it
    shows 2 decimal points, regardless of trailing zeros */


    cout << "Your interest rate is: " << setw(12) << interestRate << "% " << endl; //setw used to set up the formatting

        cout << "\n";

    cout << "Times compounded:" << setw(19) << timesCompounded << endl;

        cout << "\n";

    cout << "Principle amount: " << setw(11) << "$" << principle << endl;
    
        cout << "\n";

    cout << "Total interest gained: " << setw(8) << "$" << savingsAmount - principle << endl;

        cout << "\n";

    cout << "Total amount in savings: " << setw(4) << "$" << savingsAmount << endl;

    return 0;




    
}

