#include <iostream>
#include <string>
using namespace std;

class pet {
public:// public methods
  pet();
  pet(string name, int age, string type, double weight);
  string getName();
  void setName(string name);
  int getAge();
  void setAge(int age);
  string getType();
  void setType(string type);
  double getWeight();
  void setWeight(double weight);

  string petName;
  unsigned int petAge;
  string petType;
  double petWeight;
private:
  // N/A
};
