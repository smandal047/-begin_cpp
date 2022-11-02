// hello_world.cpp: Sayantan
// Description: A program that does varies string alteration as per problem

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  printf("Complier Test");
  cout << "Hello World!" << endl;

  printf("Modify the above program to print \"Hello World!\" 4 times on a line for 6 lines, where each is printed in a field of 17 spaces. Use for-loops to do this.\n");
  for(int i=0; i<7; i++){
    for(int i=0; i<4; i++){
      cout  << std::setw(17) << "Hello World!" ;
    }
    cout << endl;
  }

  printf("Using the program you just completed, figure out how to print \"Hello World!\" left-aligned in the fields of 17 spaces (the default is usually right-aligned).\n");
  for(int i=0; i<7; i++){
    for(int i=0; i<4; i++){
      cout  << std::left << std::setw(17) << "Hello World!" ;
    }
    cout << endl;
  }
}

