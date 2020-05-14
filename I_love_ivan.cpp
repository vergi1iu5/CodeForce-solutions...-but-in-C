#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

	int n, min, max, curr, j;
	string buffer;
	stringstream srr;

	getline(cin, buffer);
	n = stoi(buffer);
	buffer = "";
	getline(cin, buffer);
	srr.str(buffer);
	srr >> min;
	max = min;
	j = 0;

	for (int i = 0; i < n - 1; i++){
		srr >> curr;
		if (curr > max){
			j++;
			max = curr;
		}else if(curr < min){
			j++;
			min = curr;
		}
	}

	cout << j << endl;

	return 0;

}