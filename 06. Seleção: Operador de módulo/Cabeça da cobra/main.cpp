#include <iostream>
using namespace std;

int main() {
    int N, X, Y, S;
    char C;
    cin >> N >> X >> Y >> C >> S;
    
    int deslocamentoX = 0;
    int deslocamentoY = 0;
    if (C == 'U') {
        deslocamentoY = -1;
    } else if (C == 'D') {
        deslocamentoY = 1;
    } else if (C == 'L') {
        deslocamentoX = -1;
    } else if (C == 'R') {
        deslocamentoX = 1;
    }

    X = (X + deslocamentoX * S) % N;
    Y = (Y + deslocamentoY * S) % N;

    if (X < 0) {
        X += N;
    }
    if (Y < 0) {
        Y += N;
    }
    
    
    cout << X << " " << Y << endl;
    return 0;
}