#include "pet.h"

pet::pet() {
  petName = " ";
  petAge = 0;
  petType = " ";
  petWeight = 0;
}

pet::pet(string name, int age, string type, double weight) {
  petName = name;
  petAge = age;
  petType = type;
  petWeight = weight;
}
// my getters and setter (aka accessors and mutators) alternating
string pet::getName() {
  return petName;
}

void pet::setName(string name) {
  petName = name;
}

int pet::getAge() {
  return petAge;
}

void pet::setAge(int age) {
  petAge = age;
}

string pet::getType() {
  return petType;
}

void pet::setType(string type) {
  petType = type;
}

double pet::getWeight() {
  return petWeight;
}

void pet::setWeight(double weight) {
  petWeight = weight;
}
