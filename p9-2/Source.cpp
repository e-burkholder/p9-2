#include <iostream>
using namespace std;

bool isSortedIncreasing(int values[], int size);
bool isSortedDecreasing(int values[], int size);
bool hasAdjacentDuplicates(int values[], int size);
//bool hasDuplicates(int values[], int size);

int main() {
	int integers[6];
	bool sortedInc, sortedDec, adjacent;
	
	for (int i = 0; i < 6; i++) {
		cout << "Enter integer #" << i+1 << ": ";
		cin >> integers[i];
	}
	sortedInc = isSortedIncreasing(integers, 6);
	sortedDec = isSortedDecreasing(integers, 6);
	adjacent = hasAdjacentDuplicates(integers, 6);

	
	if (sortedInc == true) {
		cout << "The data is increasing." << endl;
	}
	if (sortedDec == true) {
		cout << "The data is decreasing." << endl;
	}
	if (adjacent == true) {
		cout << "The data has adjacent duplicates." << endl;
	}
}

bool isSortedIncreasing(int values[], int size) {
	int largest = values[0];
	for (int i = 0; i < 6; i++) {
		if (values[i] > largest) {
			largest = values[i];
		}
	}
	if (largest == values[5])
		return true;
	else
		return false;
}
bool isSortedDecreasing(int values[], int size) {
	int smallest = values[0];
	for (int i = 0; i < 6; i++) {
		if (values[i] < smallest) {
			smallest = values[i];
		}
	}
	if (smallest == values[5])
		return true;
	else
		return false;
}
bool hasAdjacentDuplicates(int values[], int size) {
	for (int i = 0; i < 6; i++) {
		int number = values[i+1];
		if (values[i] == number) {
			return true;
		}
	}
	
}