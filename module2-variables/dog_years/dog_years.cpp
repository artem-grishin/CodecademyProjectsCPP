#include <iostream>

int main() {
  
  int dog_age;
  
  std::cout << "Enter your dog's age: ";
  std::cin >> dog_age;
  
  if(dog_age <= 2) {
    dog_age *= 10.5;
  }
  else if (dog_age > 2) {
    dog_age -= 2;
    dog_age *= 4;
    dog_age += 21;
  }
  std::cout << "Your dog's age is: " << dog_age << "\n";
}
