#include <iostream>
using namespace std;

int main() {
	const int size = 20;
	//dynamic memory allocation for salary instaed of int array
	int* salArray = new int[size];

	// input salaries
	for (int i = 0; i < size; i++) {
		cout << "Enter salary " << (i + 1) << ": ";
		cin >> *(salArray + i);
	}

	// incremental formula
	for (int i = 0; i < size; i++) {
		*(salArray + i) = *(salArray + i) + *(salArray + i) / (i + 1);
	}
	
	cout << "\nUpdated Salaries: ";
	for (int i = 0; i < size; i++) {
		cout << *(salArray+i) << " ";
	}
	cout << endl;

	delete[] salArray;
	return 0;
}