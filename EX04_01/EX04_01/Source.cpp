#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "ENTER TO HOWEVER MANY YOU WANT PLZ: ";
	cin >> size;
	
	int* avgP = new int[size];
	for (int i = 0; i < size; i++){
		avgP[i] = NULL;
	}

	cout << "NOW PLEASES TO GIVING VALUES FOR THOSE THINGS\n";
	int sum = 0;
	for (int* address = avgP; address < avgP + size; address++){
		cout << "NUMBER: ";
		cin >> *address;
		sum += *address;
	}

	double avg = static_cast<double>(sum) / (size);
	cout << "IT'S YOUR AVERAGE: " << avg << endl;

	int absavg = 0;
	for (int* eva = avgP; eva < avgP + size; eva++){
		if (*eva > avg){
			absavg++;
		}
	}

	cout << "YOU ONLY ENTERS LIKE HOW MANY " << absavg << "\nNUMBERS THAT ABOVED THE ONLY AVERAGES ONLY\n\n";
	delete[] avgP;
}