/* Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu 
peso ideal, usando a seguinte fórmula: (72.7*altura) - 58
 */

#include <iostream>

using namespace std;

int main () {
	float altura;
	cin >> altura;
	cout << 72.7*altura - 58 << endl;
	return 0;
}