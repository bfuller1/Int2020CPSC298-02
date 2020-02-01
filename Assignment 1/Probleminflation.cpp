#include <iostream>
#include <string>
using namespace std;

class inflation {
public:
  double futurePrice(double currentCost, double years, double inflation);
private:
  // N/A
};

int main(int argc, char **argv) {
  inflation in;
  double currentCost;
  double years;
  double inflation;
// input statements
  cout << "Please enter the current cost of the item: ";
  cin >> currentCost;
  cout << "Please enter the number of years until purchase: ";
  cin >> years;
  cout << "Please enter rate of inflation (do not include percent sign): ";
  cin >> inflation;
// output statement
  cout << in.futurePrice(currentCost, years, inflation) << endl;
  return 0;
}

double inflation::futurePrice(double currentCost, double years, double inflation) { //determines the price of something in the future
  int i;
  double inflationRate = (inflation / 100) + 1; // turns the inflation rate percentage into a decimal
  for (i = 0; i < years; ++i) {
    currentCost = currentCost * inflationRate;
  }
  cout << "The cost in " << years << " years will be $" << currentCost << " dollars." << endl;
}
