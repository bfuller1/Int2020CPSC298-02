#include <iostream>
#include <string>
using namespace std;

class conversion{
public:
  void input(double& feet, double& inches);
  void calculation(double& feet, double& inches, double& meters, double& centimeters);
  void output(double& meters, double& centimeters);
private:
  // N/A
};

int main(int argc, char **argv) {
  conversion c;
  double feet = 0;
  double inches = 0;
  double meters = 0;
  double centimeters = 0;
  c.input(feet, inches);
  c.calculation(feet, inches, meters, centimeters);
  c.output(meters, centimeters);
}

void conversion::input(double& feet, double& inches) { // function for user input
  conversion c;
  cout << "Please input feet: ";
  cin >> feet;
  cout << "Please input inches: ";
  cin >> inches;
}

void conversion::calculation(double& feet, double& inches, double& meters, double& centimeters) { // function for calculation
  conversion c;
  feet = feet + (inches / 12); // converts inches to feet and adds that to the original value of feet to make a new value for feet
  meters = feet / 3.281; // converts feet to meters
  centimeters = meters * 100; // one meter is 100 centimeters
}

void conversion::output(double& meters, double& centimeters) { // output function
  cout << "Meters: " << meters << endl;
  cout << "Centimeters: " << centimeters << endl;
}

// I was not able to make the function a loop where the user could exit at any time
