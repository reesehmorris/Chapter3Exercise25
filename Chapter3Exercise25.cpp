#include <iostream>
using namespace std;

int main() {
	double rowLength, endPostSpace, vineSpacing, grapesPerRow;

	cout << "Enter the length of the row, in feet: ";
	cin >> rowLength;

	cout << "Enter the amount of space used by an end post, in feet: ";
	cin >> endPostSpace;

	cout << "Enter the amount of space between vines, in feet: ";
	cin >> vineSpacing;

	//Calculate V = (R - 2E) / S
	grapesPerRow = (rowLength - 2 * endPostSpace) / vineSpacing;

	cout << "The number of grapes that will fit in the row is: " << grapesPerRow << endl;

	return 0;
}