#include <iostream>
#include <string>
using namespace std;

class zeroboth {
public:
  void zeroBoth(int& x, int& y);
private:
  // N/A
};

int main(int argc, char **argv) {
  zeroboth zb;
  int x = 4;
  int y = 7;
  zb.zeroBoth(x, y);
  // output statement
  cout << x << " " << y << endl;
  return 0;
}

void zeroboth::zeroBoth(int& x, int& y) { // turns x and y into zeros
  x = 0;
  y = 0;
}
