#include <iostream>
using namespace std;

int main() {
  
  
  cout << "Enter your earth weight: \n";
  double earth_weight;
  cin >> earth_weight;
  
  std::cout << "   1. Venus   2. Mars    3. Jupiter\n";
  std::cout << "   4. Saturn  5. Uranus  6. Neptune\n\n";
  cout << "Enter a number for the planet you want to fight on: \n";
  int num_planet;
  cin >> num_planet;
  
  switch(num_planet) {
    case 1 :
      cout << "On Venus you are " << earth_weight * 0.78 << "lbs.\n";
      break;
    case 2 :
      cout << "On Mars you are " << earth_weight * 0.39 << "lbs.\n";
      break;
    case 3 :
      cout << "On Jupiter you are " << earth_weight * 2.65 << "lbs.\n";
      break;
    case 4 :
      cout << "On Saturn you are " << earth_weight * 1.17 << "lbs.\n";
      break;
    case 5 :
      cout << "On Uranus you are " << earth_weight * 1.05 << "lbs.\n";
      break;
    case 6 :
      cout << "On Neptune you are " << earth_weight * 1.23 << "lbs.\n";
      break;
    default:
      cout << "You've entered an incorrect planet number.\n";
      break;
      
  }
  
  
  
}
