#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float raiz1 = (-b + sqrt(delta)) / (2 * a);
        float raiz2 = (-b - sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(2);
        if (raiz1 == 0)
            raiz1 = abs(raiz1);
        if (raiz2 == 0)
            raiz2 = abs(raiz2);
        cout << raiz1 << endl;
        cout << raiz2 << endl;

    } else if (delta == 0) {
        float raiz = -b / (2 * a);
        cout << fixed << setprecision(2);
        if (raiz == 0)
            raiz = abs(raiz);
        cout << raiz << endl;
    } else {
        cout << "nao ha raiz real" << endl;
    }
}