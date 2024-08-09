/*Faça um Programa que peça a temperatura em graus Fahrenheit, 
transforme e mostre a temperatura em graus Celsius.
C = 5 * ((F-32) / 9). */

#include <iostream>

using namespace std;

int main () {
    float F;
    cin >> F;
    cout << 5 * ((F - 32)/9) << endl;
    return 0;
}