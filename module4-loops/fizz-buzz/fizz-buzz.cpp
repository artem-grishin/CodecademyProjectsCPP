#include <iostream>
using namespace std;

int main (int argc, char *argv[]) {
  
  for (int i = 1; i <= 100; i++) {
    //or we can say if i % 15 == 0
    if (i % 3 == 0 && i % 5 == 0) cout << "Fizzbuzz\n";
    else if (i % 3 == 0) cout << "Fizz\n";
    else if (i % 5 == 0) cout << "Buzz\n";
    else cout << i << endl;
  }
  
  return 0;
}
