#include <iostream>
using namespace std;

int main() {
  double pesos, reais, soles;
  cout << "Enter number of Colombian Pesos: " << endl;
  cin >> pesos;
  cout << "Enter number of Brazilian Reais: " << endl;
  cin >> reais;
  cout << "Enter number of Peruvian Soles: " << endl;
  cin >> soles;
  
  double total_usd = (pesos * 0.041) + (reais * 0.20) + (soles * 0.28);
  cout << "US Dollars = $" << total_usd << endl;
  
  return 0;
}
