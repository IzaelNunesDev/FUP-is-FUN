#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char c;
    float num;
    cin >> c >> num;

    if (c == 'r') {
        cout << round(num) << endl;
    } else if (c == 'f') {
        cout << floor(num) << endl;
    } else if (c == 'c') {
        cout << ceil(num) << endl;
    }

    return 0;
}
