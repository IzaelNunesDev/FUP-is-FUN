#include <iostream>
using namespace std;
int main() {
    int dimensaoA, dimensaoB, dimensaoC, dimensaoH, dimensaoL;
    cin >> dimensaoA >> dimensaoB >> dimensaoC >> dimensaoH >> dimensaoL;

    if ((dimensaoA <= dimensaoH && dimensaoB <= dimensaoL) ||(dimensaoA <= dimensaoL && dimensaoB <= dimensaoH) ||(dimensaoA <= dimensaoH && dimensaoC <= dimensaoL) ||
        (dimensaoA <= dimensaoL && dimensaoC <= dimensaoH) ||(dimensaoB <= dimensaoH && dimensaoC <= dimensaoL) ||(dimensaoB <= dimensaoL && dimensaoC <= dimensaoH)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;  
    }

    return 0;
}
