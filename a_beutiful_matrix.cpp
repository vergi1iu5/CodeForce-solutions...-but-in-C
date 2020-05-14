#include <iostream>
#include <string>

using namespace std;

int getIndex(char inMatrix[25]){

    for(int i = 0; i < 25; i++){
        if (inMatrix[i] == '1'){
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    string inBuffer;
    char matrix_row[25];
    int one_index, mod, rem, num_colum_sw, num_row_sw;

    for(int i = 0; i < 5; i++){
        cout << "Enter row: ";
        getline(cin, inBuffer);
        for(int j = 0; j < 5; j++){
            matrix_row[i*5 + j] = inBuffer[j];
        }
    }

    one_index = getIndex(matrix_row);
    if(one_index >= 0){
        mod = one_index / 5;
        rem = one_index % 5;
        num_colum_sw = abs(mod - 2);
        num_row_sw = abs(rem - 3);
    }
    else{
        num_colum_sw = 0;
        num_row_sw = -1;
    }

    cout << (num_colum_sw + num_row_sw) << endl;

    return 0;
}
