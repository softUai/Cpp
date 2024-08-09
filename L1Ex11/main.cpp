/*  Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre:
a) o produto do dobro do primeiro com metade do segundo.
b) a soma do triplo do primeiro com o terceiro.
c) o terceiro elevado ao cubo.*/

#include <iostream>

using namespace std;

int main () {
	int n1, n2;
	float n3;
	double result{1};
	cin >> n1;
	cin >> n2;
	cin >> n3;
	// a)
	cout << "a: " << (2*n1)*(n2/2.00) << endl;
	// b)
	cout << "b: " << (3*n1)*(n2) << endl;
	// c)
	cout << "c: " << (n3*n3*n3) << endl;
	for (int i=0; i < 3; i++){
		result *= n3;
	}
	cout << "c result: " << result << endl;
	return 0;
}