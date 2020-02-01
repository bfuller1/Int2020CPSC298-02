#include "pet.h"

int main(int argc, char **argv) {
  //pet *p = new pet();
  pet p2 = pet("Fluffy", 5, "dog", 10.5);
  pet p3 = pet("Swanson", 6, "cat", 9.1);
// two instances of pet
// output statements
  cout << "Name: " << p2.getName() << ", Age: " << p2.getAge() << ", Type: " << p2.getType() << ", Weight: " << p2.getWeight() << endl;
  cout << "Name: " << p3.getName() << ", Age: " << p3.getAge() << ", Type: " << p3.getType() << ", Weight: " << p3.getWeight() << endl;
}
