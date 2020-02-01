#include <iostream>
#include <string>
using namespace std;

class employeepay {
public:
  double moneyEarned(double hours);
private:
  // N/A
};

int main(int argc, char **argv) {
  double hours;
  employeepay ep;
// user input
  cout << "Please enter the number of hours worked: ";
  cin >> hours;
// output statement
  cout << ep.moneyEarned(hours) << endl;
  return 0;
}

double employeepay::moneyEarned(double hours) { // calculates the money made by the worker
  double overTime;
  double grossPay;
  double socialSecurityTax;
  double federalIncomeTax;
  double stateIncomeTax;
  double medicalInsurance = 10;
  double totalTaxes = 0;
  double netPay;

  if (hours > 40) { // overpay starts after 40 hours
    overTime = hours - 40;
    grossPay = (40 * 16) + (overTime * 24);
    socialSecurityTax = grossPay * .06;
    federalIncomeTax = grossPay * .14;
    stateIncomeTax = grossPay * .05;
    totalTaxes = socialSecurityTax + federalIncomeTax + stateIncomeTax + medicalInsurance;
    netPay = grossPay - totalTaxes;
  }

  else { // else statement covers if workers do overtime
    overTime = 0;
    grossPay = (hours * 16) + (overTime * 24);
    socialSecurityTax = grossPay * .06;
    federalIncomeTax = grossPay * .14;
    stateIncomeTax = grossPay * .05;
    totalTaxes = socialSecurityTax + federalIncomeTax + stateIncomeTax + medicalInsurance;
    netPay = grossPay - totalTaxes;
  }
// output statements
  cout << "Worker's Gross Pay: $" << grossPay << endl; // the amount of money the worker originall made
  cout << "Social Security Tax: $" << socialSecurityTax << endl; // money taken out by social security tax
  cout << "Federal Income Tax: $" << federalIncomeTax << endl; //money taken out by federal income tax
  cout << "State Income Tax: $" << stateIncomeTax << endl; // money taken out by state income tax
  cout << "Medical Insurance: $" << medicalInsurance << endl; // ten dollars taken out for medical insurance
  cout << "Net Take-Home Pay: $" << netPay << endl; // the money with all the taxes taken out
}
