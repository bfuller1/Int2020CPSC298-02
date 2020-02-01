#include <iostream>
#include <string>
using namespace std;

class firecapacity {
public:
  int isSafe(int maximum, int population);
private:
  // N/A
};

int main(int argc, char **argv) {
  int maximum;
  int population;
  firecapacity fc;
// input statements
  cout << "Please enter the maximum room capacity: ";
  cin >> maximum;
  cout << "Please enter the number of people attending the meeting: ";
  cin >> population;
// output statement
  cout << fc.isSafe(maximum, population) << endl;
  return 0;
}

int firecapacity::isSafe(int maximum, int population) { // determines if population is over capacity
  if (population <= maximum) { // meeting legal if population is less than or equal maximum
    int remaining = maximum - population;
    cout << "It is legal to hold this meeting." << endl;
    cout << "The room can also hold an additional " << remaining << " people." << endl;
  }
  else { // meeting not legal if population goes over the maximum
    int excluding = (maximum - population) * -1; // the amount of people over the maximum
    cout << "It is not legal to hold this meeting due to fire regulations." << endl;
    cout << "You are " << excluding << " people over the limit!" << endl;
  }
}
