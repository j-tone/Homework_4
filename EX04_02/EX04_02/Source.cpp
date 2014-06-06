#include <iostream>
using namespace std;

int* doubleCapacity(int* list, int size);

int main()
{
	int size;
	cout << "Enter any arbitrary value: ";
	cin >> size;
	int* list = new int[size];
	for (int* plist = list; plist < list + size; plist++){
		cout << plist << endl;
	}

	cout << endl;

	int* newlist = doubleCapacity(list, size);
	
	for (int* address = newlist; address < newlist + (size * 2); address++){
		cout << address << endl;
	}

	cout << "You now have " << size * 2 << " spaces for integers set aside by the computer." << endl;
	delete[] list;
}

int* doubleCapacity(int* list, int size){
	int* ptr = list;
	ptr = new int(size*2);
	return ptr;
}