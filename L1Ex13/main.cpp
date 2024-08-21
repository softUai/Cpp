/*
Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo que calcule 
seu peso ideal, utilizando as seguintes fórmulas:
Para homens: (72.7*h) - 58
Para mulheres: (62.1*h) - 44.7 */

#include <iostream>

using namespace std;

int main () {
	float h; int genre; bool verify_genre = true;
	
	do {
		cout << "What is the genre?" << endl;
		cout << "0: Man" << endl;
		cout << "1: Woman" << endl;
		cin >> genre;
		if (genre == 0 || genre == 1){
			verify_genre = false;
		} else {
			cout << genre << " is not a valid option!" << endl;
		}
	} while ( verify_genre );
	cout << "What is heigth?" << endl;
	cin >> h;
	if (genre == 0){
		cout << "Man: " << (72.7*h) - 58;
	} else {
		cout << "Woman: " << (62.1*h) - 44.7;
	}
	return 0;
}