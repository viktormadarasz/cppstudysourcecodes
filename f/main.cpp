#include <iostream>
using namespace std;

int main() {

    cout << "Setting up size of the array\n";

    int arraysize;
    cout << "enter integer for array size:\n";
    cin >> arraysize;

    string texts[arraysize]{};

    string *pArray = texts;

    cout << "Filling up array with for loop:\n";

    for(int i=0; i<sizeof(texts)/ sizeof(string);i++){
        string *pArray =&texts[i];

        cout << "*pArray points to memory: " << pArray << endl;
        cout << "enter string for array" << i << endl;
        string input;
        cin >> input;
        *pArray = input;
    }


    cout << "Outputting array with for loop:\n";

    for(int i=0; i< sizeof(texts)/ sizeof(string);i++)
    cout << texts[i] << endl;


    return 0;
}