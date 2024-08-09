/*Faça um Programa que peça as 4 notas bimestrais e mostre a média.*/
#include <iostream>

using namespace std;

int main () {
	int soma{0};
	int aux;
	for (int i=0; i<4; i++){
		cout << "Digite a nota numero " << i+1 << endl;
		cin >> aux;
		soma += aux;
	}
	cout << "A media eh " << soma/4 << endl;
	return 0;
}