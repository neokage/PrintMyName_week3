// This project will print a message and my name on the screen
// Print My Name
// Programmer Mike Cognata
// Last Modified 02.07.2024

#include <iostream>
using namespace std;

int main()
{
	// Set up section
	system("color B0");
	system("title Print My Name    by Mike Cognata");

	// Banner section
	cout << "\n"
		<< "\t\t   This lab prints my name on the monitor   \n"
		<< "\t\t          within double quotes              \n"
		<< "\t\t                 Lab #1                     \n"
		<< "\t\t              by M. Cognata					\n\n\n";

	// Output section
	cout << "\"Cognata\" \n\n";

	// Clean up section
	system("pause");
	return 0;
}