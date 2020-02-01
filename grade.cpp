# include <iostream>
using namespace std;

int main (int argc, char **argv) {

  float numGrade;

  cout << "Enter numerical grade: " << endl;
  cin >> numGrade;

  if (numGrade >= 90.0) {
    cout << "A" << endl;
  }
  else if (numGrade >= 80.0 && numGrade < 90.0) {
    cout << "B" << endl;
  }
  else if (numGrade >= 70.0 && numGrade < 80.0) {
    cout << "C" << endl;
  }
  else if (numGrade >= 60.0 && numGrade < 70.0) {
    cout << "D" << endl;
  }
  else {
    cout << "F" << endl;
  }

  return 0;
}
