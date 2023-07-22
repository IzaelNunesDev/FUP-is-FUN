#include <iostream>
using namespace std;
int main() {
    int C, A;
    
    cin >> C >> A;    
    
    int numeroViagens = (A - 1) / (C - 1) + 1;
    
    cout << numeroViagens << endl;
    
    return 0;
}