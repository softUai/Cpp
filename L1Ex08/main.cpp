/* Faça um Programa que pergunte quanto você ganha por hora e o 
número de horas trabalhadas no mês. Calcule e mostre o total do seu 
salário no referido mês. */
#include <iostream>

using namespace std;

int main () {
	float valor, hora;
	cout << "Quanto c ganha por hora?" << endl;
	cin >> valor;
	cout << "Quantas hora c trabaia?" << endl;
	cin >> hora;
	cout << "Salario: " << valor*hora << endl;
	return 0;
}