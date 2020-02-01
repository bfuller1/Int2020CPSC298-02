include "class_demo.h"

int main(int argc; char **argv)
{
  CPSC298Utils cp;
  cout << cp.countVowels("Rene") << endl;

  CPSC298Utils *cp = new CPSC298Utils();
  cout << "ON THE HEAP: " << cps->countVowels("Rene") << endl;

  delete cps;
  return 0;
}
