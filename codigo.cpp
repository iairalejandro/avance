#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

void muestra_vector(const vector<string>&);
int main()
{
  ifstream fich("nombre_apellidos.txt");
  
  int num_elementos;
  fich >> num_elementos;
  vector<string> datos;
  datos.reserve(num_elementos);

  for (int i = 0; i <= num_elementos; ++i)
  {
    string valor;
    getline(fich, valor);
    datos.push_back(valor);
  }

  muestra_vector(datos);
}

void muestra_vector(const vector<string>& v)
{
  for (auto x : v)
    cout << x << endl;
  cout << endl;
}