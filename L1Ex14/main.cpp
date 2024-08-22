/*
João Papo-de-Pescador, homem de bem, comprou um microcomputador para controlar o rendimento diário de seu trabalho. 
Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado de São Paulo 
(50 quilos) deve pagar uma multa de R$ 4,00 por quilo excedente. João precisa que você faça um programa que leia a 
variável peso (peso de peixes) e calcule o excesso. Gravar na variável excesso a quantidade de quilos além do 
limite e na variável multa o valor da multa que João deverá pagar. Imprima os dados do programa com as mensagens 
adequadas.
*/

#include <iostream>

using namespace std;

int main () {
	float pesoMax = 50;
	const float taxa = 4.00;
	float peso, excesso, multa = 0;
	cout << "Digit a pesagem de peixes!" << endl;
	cin >> peso;
	excesso = peso - pesoMax;
	if (excesso > 0){
		multa = excesso*taxa;
	}
	cout << "João pescou " << peso << "quilos de peixe!" << endl;
	cout << "A multa será de  " << multa << "reais" << endl;
	return 0;
}