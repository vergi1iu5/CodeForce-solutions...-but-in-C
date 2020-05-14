#include <iostream>
#include <string>

using namespace std;

int main(){

	string in1, in2, out;
	bool a, b;
	out = "";
	cin >> in1;
	cin >> in2;

	for(int i = 0; i < in1.size(); i++){
		a = (in1[i] == '1');
		b = (in2[i] == '1');
		
		if( (!a && b) || (!b && a) ){
				out = out + '1';
			}else{
				out = out + '0';
			}
	}

	cout << out << endl;
}