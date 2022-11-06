// cin_input.cpp: Sayantan
// Description: A program to learn cin function

#include <iostream>

using namespace std;

int main(){

    int input;


    do {
        printf("Enter an integer, or -1 to quit\n");

        if (! (cin >> input) ){
            printf("Wrong input ;( Try Again\n");
            cin.clear();
            cin.ignore();
        }
        
        if (input > 0){
            cout << "you entered: " << input << endl;
            cout << "--------------" << endl;
        }
        
    }
    while( input > 0 );

    cout << "Exiting..." << endl;

}