// Chapter3 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


// Kyle Bell
// CSC221

#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    double sugar, butter, flour, indS, indB, indF, cookies;



   

    indS = 1.50 / 48;

    indB = 1.00 / 48;

    indF = 2.75 / 48; /* establishing the individual value for a single cookie */

    cout << "Hello! How many cookies would you like to make today? " << endl;

    cout << "\n"; // adding space between lines for a little tidyness

    cin >> cookies;  /* user inout, going to be multiplied by the value for each 
    ingredient to get the amount for any given amount of cookies*/

    cout << "\n";
  
    sugar = indS * cookies;

    butter = indB * cookies;

    flour = indF * cookies; // formulas to get the adjusted ingredients list 
    
    cout << "The recipe requires " << endl;

    cout << "\n";
            
    cout << fixed << setprecision(2) << sugar << " cups of sugar" << endl;

    cout << "\n";

    cout << fixed << setprecision(2) << butter << " cups of butter" << endl;

    cout << "\n";

    cout << fixed << setprecision(2) << flour << " cups of flour" << endl; /* setprecision and fixed
    manipulators were used to give results rounded to two decimal places */

    return 0;

}
