#include <iostream>
using namespace std;
#include <iomanip>

int main() {
    int sum1, sum2, b, h, b2, h2;

    cin >> b >> h >> b2 >> h2;

    sum1 = b * h;
    sum2 = b2 * h2;
    
    if (sum1 > sum2) {
        cout << sum1 << endl;
    } else {
        cout << sum2 << endl;
    }

    return 0;
}