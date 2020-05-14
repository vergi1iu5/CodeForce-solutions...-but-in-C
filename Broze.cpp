#include <iostream>
#include <string>

using namespace std;

int main(){
	string code;
	string decoded = "";
	string num;
	int next_item = 0;

	cin >> code;

	for(int i = 0; i < code.size(); i++){
		
		if(code[i] == '.'){
			if (i == next_item){
				next_item++;
				decoded = decoded + '0';
			}else{
				decoded = decoded + '1';
				if(code[next_item] != '.'){
					next_item = next_item + 2;
				}
			}
		}else if((i + 1) % 2 == 0 && i != next_item){
			decoded = decoded + '2';
			if(code[next_item] != '.'){
					next_item = next_item + 2;
			}
		}
	}

	cout << decoded << endl;
}