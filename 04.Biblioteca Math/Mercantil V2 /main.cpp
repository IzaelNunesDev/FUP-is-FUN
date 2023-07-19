#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float chute, valor;
    char c;
    cin >> chute >> c >> valor;
	
    if (chute == valor) {
        cout << "primeiro" << endl;
    } else if (c == 'm' && chute > valor) {
        cout << "segundo" << endl;
    } else if (c == 'M' && chute < valor) {
        cout << "segundo" << endl;
    } else {
        cout << "primeiro" << endl;
    }

    return 0;
}