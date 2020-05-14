#include <iostream>

using namespace std;

int main(){
	
	int imin, imax, max_height, min_height, num_solders, bias;

	cout << "Enter number of soldiers: ";
	cin >> num_solders;
	cout << "Enter soldier heights separated by space: ";
	imin = num_solders - 1;
	imax = 0;
	min_height = 100;
	max_height = 0;

	for (int i = 0; i < num_solders; i++){
		int soldier;
		cin >> soldier;
		if (soldier > max_height){
			imax = i;
			max_height = soldier;
		}
		if (soldier <= min_height){
			imin = i;
			min_height = soldier;
		}
	}

	if (imin < imax){
		bias = 2;
	}else{
		bias = 1;
	}

	cout << (imax  + (num_solders - imin - bias)) << endl;

	return 0;
}
