#include <iostream>
using namespace std;

int* doubleCapacity(const int* list, int size);

int main()
{
	int size;
	cout << "Enter any arbitrary value: ";
	cin >> size;
	int* list = new int[size];
	for (int* plist = list; plist < list + size; plist++){
		cout << "Enter a number: ";
		cin >> *plist;
	}

	for (int* plist = list; plist < list + size; plist++){
		cout << *plist << " ";
	}
	cout << endl;

	int* newlist = doubleCapacity(list, size);
	delete[] list;
	cout << "Enter more values for the array.\n";
	for (int i = size; i < size * 2; i++){
		cout << "Enter a number: ";
		cin >> newlist[i];
	}
	for (int* address = newlist; address < newlist + (size * 2); address++){
		cout << *address << " ";
	}
	cout << endl;
}

int* doubleCapacity(const int* list, int size){
	int* ptr = new int(size * 2);
	for (int i = 0; i < size; i++){
		ptr[i] = list[i];
	}
	return ptr;
}