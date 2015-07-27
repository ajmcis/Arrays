//============================================================================
// Name        : Arrays.cpp
// Author      : Alex Mack
// Version     :
// Copyright   : (c) 2015 Mack
// Description : Doubles the integer values stored in an array then prints them out
//============================================================================

#include <iostream>
using namespace std;

void PrintArray(int [], int);
void DoubleIt(int [], int);

int main() {
	const int SIZE = 5;
	int num[SIZE];

	for (int i = 0; i < SIZE; i++) {
		 cout << "Enter value #" << i + 1 << ": ";
		 cin >> num[i];
	}

	cout << "\nArray: ";
	PrintArray(num, SIZE);

	cout <<"Array with double the original values: ";
	DoubleIt(num, SIZE);
	PrintArray(num, SIZE);
	cout << "\n" << static_cast<char>(169) << " 2015 Mack" << endl;

	return 0;
}

void PrintArray(int num [], int size){

	for (int i = 0; i < size; i++) {
		 cout << num[i] << " ";

	}

	cout << endl;

}

void DoubleIt(int num [], int size){

	for (int i = 0; i < size; i++) {
		 num[i] *= 2;

	}
}
