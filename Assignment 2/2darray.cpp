#include <iostream>
#include <string>
using namespace std;

class twoDArray {
public:
  int numbers();
private:
  // N/A
};

int main(int argc, char **argv) {
  twoDArray td;
  cout << td.numbers() << endl; // output statement
  return 0;
}

int twoDArray::numbers() {
  int a[4][5];
  int i;
  int j;
  int number;
  for (i = 0; i < 4; ++i) { // for loop meant for entering values of the 2d array
    for (j = 0; i < 5; ++i) {
      // the user inputs the numbers
      cin >> number;
      a[i][j] = number;
    }
  }

  for (i = 0; i < 4; ++i) { // for loop meant to print out the 2d array
    for (j = 0; i < 5; ++i) {
      cout << a[i][j] << ", ";
    }
    cout << endl;
  }
}

// There was an error with how the array is printed
