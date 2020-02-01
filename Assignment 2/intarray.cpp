#include <iostream>
#include <string>
using namespace std;

class intarray{
public:
  int tenNumbers();
private:
  // N/A
};

int main(int argc, char **argv) {
  intarray ia;
  cout << ia.tenNumbers() << endl; //output statement
}

int intarray::tenNumbers() { // reads 10 nonnegative numbers and then prints them
  int i;
  int userNum;
  int tenNum[10];
  cout << "Please enter 10 nonnegative numbers: " << endl;
  for (i = 0; i < 10; ++i) { // loop for recieving values
    cin >> userNum;
    if (userNum < 0) { // asks user for a new number if they put a negative number
      cout << "Please enter a positve number: " << endl;
      i = i - 1;
    }
    else {
      tenNum[i] = userNum;
    }
  }

  for (i = 0; i < 10; ++i) { // loop for printing out values
    if (i != 9) {
      cout << tenNum[i] << ", ";
    }
    else {
      cout << tenNum[i] << endl; // makes sure there is not a comma after the last number
    }
  }
}
