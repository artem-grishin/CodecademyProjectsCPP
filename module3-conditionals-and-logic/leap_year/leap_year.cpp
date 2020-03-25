#include <iostream>
using namespace std;

int main() {
  string s_year;
  cout << "Enter year: \n";
  cin >> s_year;
  
  if(s_year.length() == 4) {
    int year = stoi(s_year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
      cout << year << " is a leap year!\n";
    }
    else {
      cout << year << " is not a leap year!\n";
    }
  }
  else {
    cout << "Incorrect Entry.\n";
  }
  return 0;
  
}
