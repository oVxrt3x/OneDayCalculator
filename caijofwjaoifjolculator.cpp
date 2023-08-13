// caijofwjaoifjolculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float number1 = 0;
float number2 = 0;
std::string operation;
float answer;
std::string invalidOperation = "yes";
std::string startProgram = "yes";
std::string wrong_password = "yes";

void calculator() {
	std::cout << "First number: \n";
	std::cin >> number1;
	std::cout << "Operation: \n";
	std::cin >> operation;
	std::cout << "Second number: \n";
	std::cin >> number2;

	while (invalidOperation != "no") {
		if (operation == "add" || operation == "+" || operation == "plus" || operation == "addition") {

			answer = number1 + number2;
			invalidOperation = "no";
		}
		else if (operation == "subtract" || operation == "-" || operation == "minus" || operation == "subtraction") {

			answer = number1 - number2;
			invalidOperation = "no";

		}
		else if (operation == "multiply" || operation == "x" || operation == "*" || operation == "times") {

			answer = number1 * number2;
			invalidOperation = "no";
		}
		else if (operation == "divide" || operation == "/" || operation == "divided by" || operation == "division") {

			answer = number1 / number2;
			invalidOperation = "no";

		}
		else {

			std::cout << "Invalid operation! Please try again!\n";
			invalidOperation = "yes";
		};
	}
	std::cout << "The answer is: " << answer << "\n";

};

int main()
{

	
	while (startProgram == "yes") {
		startProgram = "no";

		while (wrong_password == "yes") {


			std::string password = "1234";
			std::string new_password;
			std::string name = "Name";
			std::cout << "What is your name?\n";
			std::cout << "\nEnter username: ";
			std::cin >> name;
			std::cout << "\nEnter Password: ";
			std::cin >> new_password;
			if (new_password == password) {
				std::cout << "\nWelcome, " + name + "\n";
				wrong_password = "no";
			}
			else {

				std::cout << "\nWrong password! Try again!\n\n";
				wrong_password = "yes";


			};




		};
		invalidOperation = "yes";
		calculator();

		std::cout << "Would you like to run another operation? (yes/no)";
		std::cin >> startProgram;


	};
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
