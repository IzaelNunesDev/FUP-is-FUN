#include <iostream>
using namespace std;
int main() {
    int N, D, A;
    cin >> N >> D >> A;

    int buttonPresses = (D - A + N) % N;
    cout << buttonPresses << endl;

    return 0;
}