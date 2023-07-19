#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, chute1, chute2;
    cin >> num >> chute1 >> chute2;
	
    if (abs(num - chute1 )< abs(num - chute2)) {
        cout << "primeiro" << endl;
    } else if(abs(num - chute1 )> abs(num - chute2))
    {
    	cout << "segundo" << endl;
	} else{
		cout << "empate" << endl;
	}

    return 0;
}