#include <iostream>
using namespace std;

int main() {
    char opc;
    int pts = 0;
    
    cin >> opc;
    if (opc == 'd') {
        pts += 1;
    }
    
    cin >> opc;
    if (opc == 'a') {
        pts += 1;
    }
    
    cin >> opc;
    if (opc == 'c') {
        pts += 1;
    }
    
    cin >> opc;
    if (opc == 'd') {
        pts += 1;
    }
    
    if (pts == 4) {
        cout << "Super Fa" << endl;
    }
    else if (pts == 3) {
        cout << "Fa" << endl;
    }
    else if (pts == 2) {
        cout << "Interessado no assunto" << endl;
    }
    else if (pts == 1) {
        cout << "Ja ouviu falar" << endl;
    }
    else if (pts == 0) {
        cout << "Nunca assistiu" << endl;
    }
    
    return 0;
}