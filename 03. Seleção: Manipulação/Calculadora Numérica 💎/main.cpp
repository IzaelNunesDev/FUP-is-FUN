#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main (){
 	int n1{}, n2{};
 	int res;
 	char op;
	cin>> n1 >> n2 >> op;

	switch (op) {
        case '+':
            res =  n1 + n2;
            break;
        case '-':
        	res = n1 - n2;
            break;
        case '*':
            res = n1 * n2;
            break;
        case '/':
            res = n1 / n2;
            break;
	}
	cout << res << '\n';
}