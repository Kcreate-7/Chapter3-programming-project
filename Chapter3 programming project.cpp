// Chapter3 programming project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Kyle Bell
// CSC221


#include <iostream>
#include <random>


using namespace std;

int main()
{


	std::random_device rd;
	std::uniform_int_distribution <int> dist(1, 1000); /*using what i saw on youtube to replicate the kind of
	                                                     simple addition problem*/
	
	
	int num1, num2, answer; // Identifying my variables



	num1 = dist(rd); // again, saw the methodology on youtube, wanted a max # of 1000

	num2 = dist(rd);

	answer = num1 + num2;


	cout << " Hello, welcome to your your personal math tutor! \n";
	
		cout << "\n";


	cout << "The first number is " << num1 << endl;

		cout << "\n";

	
	cout << "Your second number is " << num2 << endl;

		cout << "\n";


	cout << "Written as " << num1 << " + " << num2 << " = ?" << endl;

		cout << "\n";


	cout << "Take your time and show your work." << endl;

	cout << "Hit enter for the solution" << endl;


	cin.get( ); // any key does not work, they have to press enter regardless

		cout << "\n";

		cout << "\n";

	
	cout << num1 << " + " << num2 << " = " << answer; // readout of the correct answer 

		cout << "\n";

		cout << "\n";
	
	return 0;




}

