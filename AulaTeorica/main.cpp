#include <iostream>
#include <string>

using namespace std;

int userValue();
void sizeValue(int x);
void testFlows(int x);
void messageFinal();

int main () {
	int x;
	x = userValue();
	sizeValue(x);
	testFlows(x);
	messageFinal();
	return 0;
}























int userValue(){
	int x; 
	cout << "Digite o valor de x:" << endl;
	cin >> x;
	cout << "O valor de x é:" << x << endl;
	return x;
}

void sizeValue(int x){
	bool b;
	b = x > 0;
	if ( b ) {
		cout << "x > 0" << endl;
	} else {
		cout << "x < 0" << endl;
	}
}

void testFlows(int x){
	for (int i=0; i < x; i++ ) {
		cout << "pos i do for: " << i << " valor x: " << x << endl;
	}

	int i{0};
	do {
		cout << "pos i do DO: " << i << " valor x: " << x << endl;
		i = i + 1;
	} while (i < x);

	i = 0;
	while (i < x) {
		cout << "pos i do While: " << i << " valor x: " << x << endl;
		i = i + 1;
	}
}

void messageFinal(){
	cin.ignore();
	string s;
	cout << "Digite uma message s: " << endl;
	getline(cin, s);
	cout << "O valor de s é:" << s << endl;
}
