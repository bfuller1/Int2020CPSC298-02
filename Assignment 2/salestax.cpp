#include <iostream>
#include <string>
using namespace std;

class salestax{
public:
  float addTax(float& taxRate, float& cost);
private:
  // N/A
};

int main (int argc, char **argv) {
  salestax st;
  float taxRate;
  float cost;
// input statements
  cout << "Enter cost of item: ";
  cin >> cost;
  cout << "Enter the tax rate percentage (do not include %): ";
  cin >> taxRate;
// output statements
  cout << st.addTax(taxRate, cost) << endl;
  return 0;
}

float salestax::addTax(float& taxRate, float& cost) { // adds tax to cost
  taxRate = taxRate / 100; // converts the tax rate from a percentage into a decimal
  cost = cost + (cost * taxRate); // adds tax to cost
  return cost;
}
