#include <iostream>
#include <string>
using namespace std;

class cereal {
public:
  float countTons(float input);
private:
  // N/A
};

int main(int argc, char **argv) {
  float cerealOunces;
  cereal c;
// User Input
  cout << "Please enter the weight of cereal in ounces: ";
  cin >> cerealOunces;

  cout << c.countTons(cerealOunces) << endl;
  return 0;
}

float cereal::countTons(float input) { // method converts ounces to metric tons
  float metricTon = 35273.92;
//One metric ton equals 35273.92 ounces
  double cerealTons = input / metricTon;
  double boxes = metricTon / input;
// Output
  cout << "Weight of cereal in metric tons: " << cerealTons << endl;
  cout << "Boxes needed to make one metric ton: " << boxes << endl;
}
