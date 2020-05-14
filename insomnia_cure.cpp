#include <iostream>

using namespace std;

int main(){

	int i, j, k, l, d;

	cin >> i >> j >> k >> l >> d;

	int out = d;

	if (i == 1 || j == 1 || k == 1 || l == 1){
		out = d;
	}else{
		for(int y = 1; y <= d + 1; y++){
			if ((y%i != 0) && (y%j != 0) && (y%k != 0) && (y%l != 0)){
				out--;
			}
		}
	}

	cout << out << endl;

	return 0;
}