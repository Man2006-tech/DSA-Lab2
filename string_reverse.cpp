#include <iostream>
#include <cstring>   
using namespace std;

int main() {
	int length;
	cout << "Enter the length of the String: ";
	cin >> length;
	cin.ignore();
	char* str = new char[length + 1]; 
	cout << "Enter the String: ";
	cin.getline(str, length + 1);

	for (int i=0; i < length / 2; i++) {
		char temp = str[i];
		str[i] = str[length - i - 1];
		str[length - i - 1] = temp;
	}
	cout << "Reversed String: " << str << endl;
	delete[] str; 
	return 0;
}