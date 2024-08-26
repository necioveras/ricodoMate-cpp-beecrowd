#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {

  int n = 0;
  std::cin >> n;

  float l, q;

  std::cin >> l >> q;

  std::cin.ignore(n, '\n');

  std::string linha;
  std::vector<std::string> nomes;

  std::getline(std::cin, linha);

  std::istringstream iss(linha);
  std::string nome;
  while (iss >> nome) {
    nomes.push_back(nome);
  }

  float res = l;
  int rico = 0;
  while (res > q) {
    res = res - q;
    rico++;
    if (rico == n)
      rico = 0;
  }

  std::cout << nomes[rico] << " " << std::fixed << std::setprecision(1) << res
            << std::endl;
}