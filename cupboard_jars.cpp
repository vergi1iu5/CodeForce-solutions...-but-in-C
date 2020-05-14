#include <iostream>

using namespace std;

int main(){

	int n, l, r, rl, rr, threshold, temp;
	r = 0;
	l = 0;

	cin >> n;

	threshold = n / 2;

	for (int i = 0; i < n; i++){
		cin >> temp;
		l = l + temp;

		cin >> temp;
		r = r + temp;
	}

	rl = n - l;
	rr = n - r;

	if(rl > threshold){
		temp = l;
	}else{
		temp = rl;
	}

	if(rr > threshold){
		temp = temp + r;
	}else{
		temp = temp + rr;
	}

	cout << temp << endl;

	return 0;
}