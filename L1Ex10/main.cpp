/* Faça um Programa que peça a temperatura em graus Celsius, 
transforme e mostre em graus Fahrenheit.*/
// C = 5 * ((F-32) / 9) -> (9C/5)+32


#include <iostream>

using namespace std;

int main () {
    float C;
    cin >> C;
    cout << (9*C/5)+32 << endl;
    return 0;
}