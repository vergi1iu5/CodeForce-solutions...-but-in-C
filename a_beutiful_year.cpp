#include <string>
#include <iostream>

using namespace std;

bool uniqueYear(string year){

    for(int i = 0; i < year.length(); i++){
        for(int j = i + 1; j < year.length(); j++){
            if (year[i] == year[j]){
                return 0;
            }
        }
    }
    return 1;

}

int getNextYear(string year){

    int year_int = stoi(year);
    year_int++;

    year = to_string(year_int);

    if (uniqueYear(year)){
        return year_int;
    }else{
        return getNextYear(year);
    }
}

int main()
{

    string year;
    cout << "Enter year: ";
    getline(cin, year);

    cout << getNextYear(year) << endl;

    return 0;
}

