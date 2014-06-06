#include <iostream>
using namespace std;

int smallestValue(int* ptr, int size);

int main()
{
	int nums[8] = { 2, 1, 4, 5, 10, 100, 2, -22 };
	int* ptrnums = nums;

	for (int* adrs = ptrnums; adrs < ptrnums + 8; adrs++){
		cout << *adrs << endl;
	}
	cout << endl << "Those are the values in the array.\n";
	cout << smallestValue(ptrnums, 8) << " is the smallest value.\n\n";
}

int smallestValue(int* ptr, int size){
	int smallv = ptr[0];
	for (int* adrs = ptr; adrs < ptr + size; adrs++){
		for (int* eva = ptr + (size-1); eva > adrs; eva--){
			if (*eva < smallv){
				smallv = *eva;
			}
		}
		if (*adrs < smallv){
			smallv = *adrs;
		}
		return smallv;
	}
}