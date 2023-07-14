#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	int n1{}, n2{};

	cin>> n1 >> n2;
	
	cout << n1 + n2 << '\n';
	cout << n1 - n2 << '\n';
	cout << n1 * n2 << '\n';
	
	cout << std::setprecision(2) << fixed;
	cout << float(n1) / n2 << '\n';
	cout << n1 % n2 << '\n';
}