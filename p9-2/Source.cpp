#include <iostream>
using namespace std;

bool isSortedIncreasing(int values[], int size);
//bool isSortedDecreasong(int values[], int size);
//bool hasAdjecentDuplicates(int values[], int size);
//bool hasDuplicates(int values[], int size);

int main() {
	int integers[6];
	bool sorted;
	
	for (int i = 0; i < 6; i++) {
		cout << "Enter integer #" << i+1 << ": ";
		cin >> integers[i];
	}
	sorted = isSortedIncreasing(integers, 6);
	
	if (sorted == true) {
		cout << "The data is increasing." << endl;
	}
}

bool isSortedIncreasing(int values[], int size) {
	int largest = values[0];
	for (int i = 0; i < 6; i++) {
		if (values[i] > largest) {
			largest = values[i];
		}
	}
	if (largest==values[5])
		return true;
}